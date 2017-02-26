# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp

developer: main.o singleton.o
	$(CC) main.o singleton.o $(FLAGS) -o bin/Singleton

main.o: 
	$(CC) -c $(mainFile);
	
singleton.o:
	$(CC) -c $(INCLUDE_PATH)singleton.cpp
		
clean: 
	rm *.o
