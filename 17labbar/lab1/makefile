HEADERS = isNumber.c
CC = gcc
CFLAGS = -Wall -std=gnu11 -ggdb

default: isNumber

isNumber: isNumber.c isString.o
	$(CC) $(CFLAGS) -o isNumber isNumber.c isString.o

isString.o: isString.c
	$(CC) $(CFLAGS) isString.c -c

utils: utils.c
	$(CC) $(CFLAGS) -o utils utils.c -c

guess: guess.c utils.c
	$(CC) $(CFLAGS) -o guess guess.c utils.c

clean:
	-rm -f *.o
