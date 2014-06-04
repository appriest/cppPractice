# Practice makefile using a couple common things

CC=g++
cflags=-Wall
rmflags=-rf

all:
	$(CC) $(cflags) practice.cpp -o practice

clean:
	rm $(rmflags) practice
