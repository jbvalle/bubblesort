#Binary Building tool

#declare Phony in Phony so incase a file has the same name
#the phony will still be run
.Phony = all clean

#declare all variables
CC = gcc

#declare all linkerflags
CFLAGS = -g -Wall -Wextra -pedantic
LFLAGS= -lm
#declare Sources and Binaries
SRCS := $(wildcard *.c)
OBJF := $(SRCS:%.c=%.o)
BINS := $(SRCS:%.c=%)
TARGET := main

#define the "all" target
all: $(TARGET) $(OBJF) cleanobj

#target <- objectfiles
$(TARGET): $(OBJF)
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)

$(OBJF): $(SRCS)
	$(CC) -c $^

cleanobj:
	rm *.o

#clean target
clean:
	echo "Cleaning Up"
	rm -rvf *.o *.exe ${BINS}
