# Practice makefile using a couple common things

CC=g++
cflags=-Wall
rmflags=-rf

all:
	$(CC) $(cflags) practice.cpp -o practice
	$(CC) $(cflags) practice2.cpp -o practice2

vectorAdd:
	$(CC) $(cflags) vectorAdd.cpp -o vectorAdd

clean:
	rm $(rmflags) practice
	rm $(rmflags) practice2
