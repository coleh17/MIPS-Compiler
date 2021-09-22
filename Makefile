CC = g++
CFLAGS = -Wall -std=c++11

run: assemble.o assembler.h
	$(CC) $(CFLAGS) assemble.o -o assembler.exe

assemble.o: assembler.h
	$(CC) $(CFLAGS) -c assemble.cpp