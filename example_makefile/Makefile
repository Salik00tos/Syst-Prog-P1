CC = gcc # The compiler we use to turn our source "documents" into compiled pieces

# Extra rules for how we want the compiler to behave
# -std=c99  → write the paper using the C99 "format"
# -g        → include debugging info (like reviewer notes)
# -Wall     → show all warnings (grammar/style checks)
CFLAGS = -std=c99 -g -Wall

all: example_makefile

# This says: the final PDF (example_makefile) depends on these compiled sections
# If either main.o or greet.o is newer than the final program,
# we must regenerate the "PDF"
example_makefile: main.o greet.o
	$(CC) $(CFLAGS) -o $@ $^


# This says: main.o (a compiled section of the paper)
# depends on main.c (source document)
# and greet.h (shared outline or structure reference)
# If either changes, rebuild main.o
main.o: main.c greet.h
# Compile only this source file into an object file (not the final PDF yet)
	$(CC) $(CFLAGS) -c $<

# This says: greet.o depends on greet.c and greet.h
# If either file changes, rebuild greet.o
greet.o: greet.c greet.h
# Compile greet.c into its own object file
	$(CC) $(CFLAGS) -c $<

# A convenience target
# Not part of the "paper", just a cleanup command
clean:
	rm -f *.o example_makefile

# These are not real files — just instruction names
.PHONY: all clean