# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.h

developer: shapeFactory.o main.o
	$(CC) shapeFactory.o main.o $(FLAGS) -o bin/factoryMethod;
	
main.o: $(mainFile)
shapeFactory.o: circle.o square.o rectangle.o $(INCLUDE_PATH)factory/shapeFactory.h	
shape.o: $(INCLUDE_PATH)shape/shape.h
circle.o: shape.o $(INCLUDE_PATH)shape/circle.h
square.o: shape.o $(INCLUDE_PATH)shape/square.h	
rectangle.o: shape.o $(INCLUDE_PATH)shape/rectangle.h
		
clean: 
	rm *.o
	
	