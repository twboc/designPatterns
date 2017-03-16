# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Strategy;
	
main.o: frenchToast.o fatPolishToast.o englishToast.o toaster.o
	$(CC) -c $(mainFile);
	
toast.o: 
	$(CC) -c $(INCLUDE_PATH)Toast.cpp;
	
frenchToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)FrenchToast.cpp;
	
fatPolishToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)FatPolishToast.cpp;
	
englishToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)EnglishToast.cpp;
	
toaster.o: toast.o
	$(CC) -c $(INCLUDE_PATH)Toaster.cpp;
		
clean: 
	rm *.o
