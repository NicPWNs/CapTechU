#include <stdio.h>          /* for printf() and fprintf() */
#include <stdlib.h>         /* for atoi() and exit() */
#ifdef _WIN32                   /* IF ON A WINDOWS PLATFORM YOU WILL HAVE TO CHECK THIS */
#include <winsock2.h>           /* IF ON A WINDOWS PLATFORM YOU WILL HAVE TO CHECK THIS */
#include <ws2tcpip.h>           /* IF ON A WINDOWS PLATFORM YOU WILL HAVE TO CHECK THIS */
#else
#include <arpa/inet.h>      /* for sockaddr_in and inet_ntoa() */
#include <sys/socket.h>     /* for socket(), bind(), and connect() */
#include <string.h>         /* for memset() */
#include <unistd.h>         /* for close() */
#endif

#define MAXPENDING 5        /* Maximum outstanding connection requests */
#define RCVBUFSIZE 250

void DieWithError(char *errorMessage);  /* Error handling helper function */
void HandleClientTCP(int clntSocket);   /* TCP client handling function   */
void ProcessMain(int servSock);     /* Fork main function definition  */
char *quoteHelper(void);
char *caesarHelper(int option, char str[]);
char *timeHelper(int option);
char *countryHelper(int idReq);

int main(int argc, char *argv[])
{
    int servSock_d;                     /* Socket descriptor for server */
    pid_t fork_ProcessID;       /* Fork Process ID from fork()  */
    unsigned int childProcessCount = 0; /* Number of child processes    */
    unsigned int processLimit;          /* Number of child processes to create */
    struct sockaddr_in echoServAddr;    /* Local address */
    unsigned short echoServPort;        /* Server port */

    /* ------Step 0 check user input ------ */
    /* Test for correct number of arguments from user */
    if (argc != 3) {     
        fprintf(stderr, "Usage:  %s <Server Port> <CHILD FORK LIMIT>\n", argv[0]);
        exit(1);
    }

    echoServPort = atoi(argv[1]);   /* First arg:  should be local port */
    processLimit = atoi(argv[2]);   /* Second arg:  should be limit for # of children */

    /* ------Step 1 create the socket ------- */
    /* Create socket for incoming connections */
    if ((servSock_d = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0)
        DieWithError("socket() failed");
      
    /* Construct local address structure */
    memset(&echoServAddr, 0, sizeof(echoServAddr));   /* Zero out structure */
    echoServAddr.sin_family = AF_INET;                /* Internet address family */
    echoServAddr.sin_addr.s_addr = htonl(INADDR_ANY); /* Any incoming interface */
    echoServAddr.sin_port = htons(echoServPort);      /* Local port */

    /* ------Step 2 bind the connection ip:port ------- */
    /* Bind to the local address */
    if (bind(servSock_d, (struct sockaddr *) &echoServAddr, sizeof(echoServAddr)) < 0)
        DieWithError("bind() failed");

    /* ------Step 3 listen to the socket for a connection ------- */
    /* Establish the socket to listen for incoming connections */
    if (listen(servSock_d, MAXPENDING) < 0)
        DieWithError("listen() failed");

    for (childProcessCount=0; childProcessCount < processLimit; childProcessCount++) 
    {
        /* Fork child process and report any errors */
        if ((fork_ProcessID = fork()) < 0)
            DieWithError("fork() failed");
        else if (fork_ProcessID == 0)  /* If this is the child process */
            ProcessMain(servSock_d);
    }
    exit(0);  /* The children will carry on */
}

void ProcessMain(int servSock)
{
    int clntSock;                  /* Socket descriptor for client connection */
    struct sockaddr_in echoClntAddr;    /* Client address */
    unsigned int clntLen;               /* Length of client address data structure */

    for (;;)  /* Run forever */
    {
        /* Set the size of the in-out parameter */
        clntLen = sizeof(echoClntAddr);
    
        /* Wait for a client to connect */
        if ((clntSock = accept(servSock, (struct sockaddr *) &echoClntAddr, 
               &clntLen)) < 0)
            DieWithError("accept() failed");
    
        /* clntSock is connected to a client! */
    
        printf("Handling client %s\n", inet_ntoa(echoClntAddr.sin_addr));

        printf("With child process: %d\n", (unsigned int) getpid());
        HandleClientTCP(clntSock);
    }
}

void HandleClientTCP(int clntSocket)
{
    char echoBuffer[RCVBUFSIZE];
    char *echoBufferDec;
    char newBuffer[RCVBUFSIZE];
    char *newBufferEnc;
    int recvMsgSize;
    int sendMsgSize;

    /* ------Step 5 recv from the client ------- */
    /* Receive message from client */
    if ((recvMsgSize = recv(clntSocket, echoBuffer, RCVBUFSIZE, 0)) < 0)
        DieWithError("recv() failed");

    /* Send received string and receive again until end of transmission */
    while (recvMsgSize > 0)      /* zero indicates end of transmission */
    {
        echoBufferDec = caesarHelper(2, echoBuffer);
    
        if (strcmp(echoBufferDec, "quote") == 0)
        {
            newBuffer[0] = '\0';
            strcat(newBuffer,quoteHelper());
            sendMsgSize = strlen(newBuffer);
            newBuffer[sendMsgSize] = '\0';
        }

        if (strcmp(echoBuffer, "gmttime") == 0)
        {
            newBuffer[0] = '\0';
            strcat(newBuffer,timeHelper(2));
            sendMsgSize = strlen(newBuffer);
            newBuffer[sendMsgSize] = '\0';
        }

        if (strcmp(echoBuffer, "localtime") == 0)
        {
            newBuffer[0] = '\0';
            strcat(newBuffer,timeHelper(1));
            sendMsgSize = strlen(newBuffer);
            newBuffer[sendMsgSize] = '\0';
        }

        if (strcmp(echoBuffer, "country") == 0)
        {
            newBuffer[0] = '\0';
            strcat(newBuffer,countryHelper(302721));
            sendMsgSize = strlen(newBuffer);
            newBuffer[sendMsgSize] = '\0';
        }
        
        printf("Received from the client: [%.*s] \n",recvMsgSize, echoBufferDec);

        newBufferEnc = caesarHelper(1, newBuffer);

        if (send(clntSocket, newBufferEnc, sendMsgSize, 0) != sendMsgSize)
            DieWithError("send() failed");

        printf("Sent to client: [%s]", newBufferEnc);

        /* See if there is more data to receive */
        if ((recvMsgSize = recv(clntSocket, echoBuffer, RCVBUFSIZE, 0)) < 0)
            DieWithError("recv() failed");
    }

    /* ------Step 7 close when program is terminated ------- */
    /* Close client socket and clean up resources*/
    close(clntSocket);
#ifdef _WIN32               /* IF ON A WINDOWS PLATFORM YOU WILL HAVE TO CHECK THIS */
    WSACleanup()
#endif
}