# This is a Makefile
# Author: Ariel Ortiz

CC = g++

executable: main.o fact.o
	$(CC) main.o fact.o -o executable

main.o: main.cpp fact.h
	$(CC) main.cpp -c

fact.o: fact.cpp fact.h
	$(CC) fact.cpp -c

clean:
	rm -f executable main.o fact.o

