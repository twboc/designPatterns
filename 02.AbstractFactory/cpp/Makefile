# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp
OBJECCTS = abstractFactory.o main.o shapeFactory.o colorFactory.o shape.o circle.o square.o rectangle.o color.o red.o green.o blue.o

include make/shapeFactory
include make/colorFactory

developer: abstractFactory.o main.o
	$(CC) abstractFactory.o main.o $(FLAGS) -o bin/AbstractFactory

main.o: 
	$(CC) -c $(mainFile);
	
abstractFactory.o: shapeFactory.o colorFactory.o
	$(CC) -c $(INCLUDE_PATH)factory/abstractFactory.cpp
		
clean: 
	rm *.o
