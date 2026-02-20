CC = gcc //
CFLAGS = -std=c99 -g -Wall

all: example_makefile

example_makefile: main.o greet.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c greet.h
	$(CC) $(CFLAGS) -c $<

greet.o: greet.c greet.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o example_makefile

.PHONY: all clean