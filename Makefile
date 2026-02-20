CC = gcc
CFLAGS = -std=c99 -g -Wall

all: memgrind memtest

memgrind: memgrind.o mymalloc.o
	$(CC) $(CFLAGS) -o $@ $^

memtest: memtest.o mymalloc.o
	$(CC) $(CFLAGS) -o $@ $^

memgrind.o: memgrind.c mymalloc.h
	$(CC) $(CFLAGS) -c $<

memtest.o: memtest.c mymalloc.h
	$(CC) $(CFLAGS) -c $<

mymalloc.o: mymalloc.c mymalloc.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o memgrind memtest

.PHONY: all clean