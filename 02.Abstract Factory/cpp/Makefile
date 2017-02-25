# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp
OBJECCTS = abstractFactory.o main.o shapeFactory.o colorFactory.o shape.o circle.o square.o rectangle.o color.o red.o green.o blue.o

developer: abstractFactory.o main.o
	$(CC) abstractFactory.o main.o $(FLAGS) -o bin/AbstractFactory;
	
main.o: 
	$(CC) -c $(mainFile);
	
abstractFactory.o: shapeFactory.o colorFactory.o
	$(CC) -c $(INCLUDE_PATH)factory/abstractFactory.cpp
	
shapeFactory.o: shape.o circle.o square.o rectangle.o
	$(CC) -c $(INCLUDE_PATH)factory/shapeFactory.cpp
	
colorFactory.o: color.o red.o green.o blue.o
	$(CC) -c $(INCLUDE_PATH)factory/colorFactory.cpp
	
shape.o:
	$(CC) -c $(INCLUDE_PATH)shape/shape.cpp

circle.o: shape.o
	$(CC) -c $(INCLUDE_PATH)shape/circle.cpp
	
square.o: shape.o
	$(CC) -c $(INCLUDE_PATH)shape/square.cpp
	
rectangle.o: shape.o
	$(CC) -c $(INCLUDE_PATH)shape/rectangle.cpp
	
color.o:
	$(CC) -c $(INCLUDE_PATH)color/color.cpp
	
red.o: color.o
	$(CC) -c $(INCLUDE_PATH)color/red.cpp
	
green.o: color.o
	$(CC) -c $(INCLUDE_PATH)color/green.cpp

blue.o: color.o
	$(CC) -c $(INCLUDE_PATH)color/green.cpp
 		
clean: 
	rm *.o