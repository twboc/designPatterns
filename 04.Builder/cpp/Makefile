# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp



developer: main.o BuildManager.o SportCarBuilder.o TruckCarBuilder.o
	$(CC) main.o BuildManager.o SportCarBuilder.o TruckCarBuilder.o $(FLAGS) -o bin/Builder

main.o:
	$(CC) -c $(mainFile);
	
BuildManager.o: Builder.o
	$(CC) -c $(INCLUDE_PATH)builder/BuildManager.cpp;

Builder.o: Body.o Engine.o Wheel.o
	$(CC) -c $(INCLUDE_PATH)builder/Builder.cpp;
	
SportCarBuilder.o: Builder.o Car.o Wheel.o Body.o Engine.o
	$(CC) -c $(INCLUDE_PATH)builder/SportCarBuilder.cpp;
	
TruckCarBuilder.o: Builder.o Car.o Wheel.o Body.o Engine.o
	$(CC) -c $(INCLUDE_PATH)builder/TruckCarBuilder.cpp;
	

	
include make/CarMake

		
clean: 
	rm *.o
