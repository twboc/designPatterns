# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Composite;
	
main.o: Toaster.o ToasterPart.o
	$(CC) -c $(mainFile);
	
ToasterComponent.o: 
	$(CC) -c $(INCLUDE_PATH)ToasterComponent.cpp
	
Toaster.o: ToasterComponent.o
	$(CC) -c $(INCLUDE_PATH)Toaster.cpp
	
ToasterPart.o: ToasterComponent.o
	$(CC) -c $(INCLUDE_PATH)ToasterPart.cpp
		
clean: 
	rm *.o
