# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: shapeFactory.o main.o
	$(CC) shapeFactory.o main.o $(FLAGS) -o bin/FactoryMethod;
	
main.o: 
	$(CC) -c $(mainFile);
	
shapeFactory.o: circle.o square.o rectangle.o
	$(CC) -c src/factory/shapeFactory.cpp
	
shape.o:
	$(CC) -c src/shape/shape.cpp

circle.o: shape.o
	$(CC) -c src/shape/circle.cpp
	
square.o: shape.o
	$(CC) -c src/shape/square.cpp
	
rectangle.o: shape.o
	$(CC) -c src/shape/rectangle.cpp
		
clean: 
	rm *.o