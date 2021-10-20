#Binary Building tool

#declare Phony in Phony so incase a file has the same name
#the phony will still be run
.Phony = all clean

#declare all variables
CC = gcc

#declare all linkerflags
CFLAGS = -g -Wall -Wall -Wextra -pedantic
LFLAGS= -lm
#declare Sources and Binaries
SRCS := $(wildcard *.c)
OBJF := $(SRCS:%.c=%.o)
BINS := $(SRCS:%.c=%)

#define the "all" target
all: $(OBJF) $(BINS) cleanobj

#target <- objectfiles
%: %.o
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)

%.o: %.c
	$(CC) -c $^

cleanobj:
	rm *.o

#clean target
clean:
	echo "Cleaning Up"
	rm -rvf *.o *.exe ${BINS}
