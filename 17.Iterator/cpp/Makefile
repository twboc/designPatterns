# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Iterator;
	
main.o: toastMenu.o
	$(CC) -c $(mainFile);
	
toastMenu.o: iterator.o
	$(CC) -c $(INCLUDE_PATH)ToastMenu.cpp

iterator.o:
	$(CC) -c $(INCLUDE_PATH)Iterator.cpp
	
clean: 
	rm *.o
