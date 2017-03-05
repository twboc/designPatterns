# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Bridge;
	
main.o: FrenchToast.o GermanToast.o Toaster.o
	$(CC) -c $(mainFile);
	
FrenchToast.o: GenericToast.o
	$(CC) -c $(INCLUDE_PATH)toasts/FrenchToast.cpp
	
GermanToast.o: GenericToast.o
	$(CC) -c $(INCLUDE_PATH)toasts/GermanToast.cpp
	
GenericToast.o:
	$(CC) -c $(INCLUDE_PATH)toasts/GenericToast.cpp
	
Toaster.o: GenericToast.o
	$(CC) -c $(INCLUDE_PATH)toaster/Toaster.cpp
		
clean: 
	rm *.o