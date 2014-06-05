# Practice makefile using a couple common things

CC=g++
cflags=-Wall
rmflags=-rf

all:
	$(CC) $(cflags) practice.cpp -o practice
	$(CC) $(cflags) practice2.cpp -o practice2
clean:
	rm $(rmflags) practice
	rm $(rmflags) practice2
