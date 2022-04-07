CC = gcc
CFLAGS = -g -Wall -pthread
INCLUDE1 = DieWithError.c caesarHelper.c
INCLUDE2 = DieWithError.c caesarHelper.c quoteHelper.c countryHelper.c timeHelper.c

all: Application Client Server

Application: Application.c
	$(CC) $(CFLAGS) -o $@.o $<

Client: Client.c
	$(CC) $(CFLAGS) $(INCLUDE1) -o $@.o $<

Server: Server.c
	$(CC) $(CFLAGS) $(INCLUDE2) -o $@.o $<

clean:
	-rm -f *.o *~ *core* 
