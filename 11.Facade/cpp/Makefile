# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp

developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Facade

main.o: waiter.o
	$(CC) -c $(mainFile);
	
taost.o: 
	$(CC) -c $(INCLUDE_PATH)Toast.cpp;
	
fatPolishToast.o: 
	$(CC) -c $(INCLUDE_PATH)FatPolishToast.cpp;
	
freanchToast.o: 
	$(CC) -c $(INCLUDE_PATH)FrenchToast.cpp;
	
spanishToast.o: 
	$(CC) -c $(INCLUDE_PATH)SpanishToast.cpp;
	
waiter.o: fatPolishToast.o freanchToast.o spanishToast.o
	$(CC) -c $(INCLUDE_PATH)Waiter.cpp;
	
clean: 
	rm *.o
