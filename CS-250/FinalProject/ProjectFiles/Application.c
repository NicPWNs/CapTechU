#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void menu(int option);

int main(void) {

  int option = 0;

  while(option != 4)
  {
    system("clear");
    printf("Application Menu\n");
    printf("================\n\n");
    printf("1. Retrieve Server Time\n");
    printf("2. Retrieve Quote\n");
    printf("3. Retrieve Country Info\n");
    printf("4. Exit Application\n\n");
    printf("Enter Choice: ");

    scanf("%d", &option);
    menu(option);
  }

  return 0;
}

void menu(int option)
{
  int choice = 0;
  int dislike = 2;
  int quoteNum;
  int disliked[100] = { 0 };
  char service[50] = "service";
  char buffer[250];
  char buffer2[250];
  char buffer3[250];
  char command[100];
  char quoteArr[5];

  switch(option)
  {
    case 1:

      system("clear");
      printf("1. Get GMT Time\n");
      printf("2. Get Local Time\n\n");
      printf("Enter Choice: ");
      scanf("%d", &choice);
      if (choice == 1)
      {
        service[0] = '\0';
        strcat(service,"gmttime");
        getchar();
        getchar();
      }

      else if (choice == 2)
      {
        service[0] = '\0';
        strcat(service,"localtime");
        getchar();
        getchar();
      }

      else
      {
        printf("\nInvalid Option! Returning to menu.");
        getchar();
        getchar();
        return;
      }

      if (strcmp(service, "gmttime") == 0 || strcmp(service, "localtime") == 0)
      {
        command[0] = '\0';
        snprintf(command, sizeof(command), "./Client.o 127.0.0.1 %s 31337", service);
        FILE* file = popen(command, "r");
        buffer[0] = '\0';
        fgets(buffer, 1000, file);
        printf("%s", buffer);
      }

      break;

    case 2:
      system("clear");
      printf("1. Get Quote\n");
      printf("2. No Action\n\n");
      printf("Enter Choice: ");
      scanf("%d", &choice);

      if (choice == 1)
      {
        service[0] = '\0';
        strcat(service,"quote");
        getchar();
      }

      else
      {
        printf("\nNo Action. Returning to menu.");
        getchar();
        getchar();
        return;
      }

      if (strcmp(service, "quote") == 0)
      {
        command[0] = '\0';
        snprintf(command, sizeof(command), "./Client.o 127.0.0.1 %s 31337", service);
        FILE* file2 = popen(command, "r");
        buffer2[0] = '\0';
        fgets(buffer2, 1000, file2);
        quoteArr[0] = buffer2[0];
        quoteArr[1] = buffer2[1];
        quoteNum = atoi(quoteArr);
        if (disliked[quoteNum] == 2)
        {
          buffer2[0] = '\0';
          strcat(buffer2, "Bad quote retrieved, try again.\n");
          getchar();
        }
          
        while (dislike != 0 && dislike != 1)
        {
          system("clear");
          printf("Quote: %s", buffer2);
          printf("Do you like this quote? \n0. Like \n1. Dislike\nEnter Chouce: ");
          scanf("%d", &dislike);

          if (dislike != 0 && dislike != 1)
            printf("Invalid Option!\n");
          getchar();
        }

        if (dislike == 1)
        {
          printf("Quote disliked!\n");

          disliked[quoteNum]++;
          if (disliked[quoteNum] == 2)
            printf("Quote disliked twice! Will not be shown again.\n");
        }
        else
          printf("Quote liked!\n");

      }

      break;

    case 3:
      system("clear");
      printf("1. Get Country Code\n");
      printf("2. Get Country Name\n");
      printf("3. Get Country Continent\n");
      printf("4. Get All Country Info\n\n");
      printf("Enter Choice: ");
      scanf("%d", &choice);

      if (choice == 1)
      {
        service[0] = '\0';
        strcat(service,"country");
        getchar();
        getchar();
      }

      else if (choice == 2)
      {
        service[0] = '\0';
        strcat(service,"country");
        getchar();
        getchar();
      }

      else if (choice == 3)
      {
        service[0] = '\0';
        strcat(service,"country");
        getchar();
        getchar();
      }

      else if (choice == 4)
      {
        service[0] = '\0';
        strcat(service,"country");
        getchar();
        getchar();
      }

      else
      {
        printf("\nInvalid Option! Returning to menu.");
        getchar();
        getchar();
        return;
      }

      if (strcmp(service, "country") == 0)
      {
        command[0] = '\0';
        snprintf(command, sizeof(command), "./Client.o 127.0.0.1 %s 31337", service);
        FILE* file3 = popen(command, "r");
        buffer3[0] = '\0';
        fgets(buffer3, 1000, file3);
        printf("%s", buffer3);
      }

      break;

    case 4:
      return;

    default:
      printf("Invalid Option!");
      break;
  }

  getchar();
  getchar();

  return;
}

// application requires main menu and sub menus to capture input correctly after each user interaction
// Control should be returned to the main menu for next user input
// User input options: 
// 1. Get the server time in one of 2 formats
//    either GMT or local time and date (user gets option on which format)
//      1.a GMT
//      1.b Local
// 
// 2. Request a Quote of the Day to brighten their day
//    (request and response should be encrypted across the wire 
//     but the user and the "application" doesnt need to know this)
//      2.a if the user doesnt like the quote they get to "unlike" it
//      2.b if the user likes the quote they get to "like" it
//      2.c user may choose to do neither
//
// 3. Request one of the following based upon a country ID: 
//      Enter Id to get Country Code
//      Enter Id to get Country Name
//      Enter Id to get Continent the Country is associated with if applicable
//      (again request response should be encrypted across the wire 
//       but the user and the "application" doesnt need to know this)
//       3.a Country Code lookup
//       3.b Country Name lookup
//       3.c Country Continent Lookup
//  
//   Errors that must be dealt with by the Application: 
//      - no date time returned;
//      - country information not returned;
//      - some of the countries dont have a continent - appropriately display that to user
//      - user doesnt like/unlike the quote - need to return something to server, release client and
//        return the Application to main menu