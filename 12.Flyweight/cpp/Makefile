# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Flyweight;
	
main.o: toastFactory.o
	$(CC) -c $(mainFile);
	
toastFactory.o: polishToast.o frenchToast.o
	$(CC) -c $(INCLUDE_PATH)ToastFactory.cpp;
	
toast.o: 
	$(CC) -c $(INCLUDE_PATH)Toast.cpp;
	
polishToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)PolishToast.cpp;
	
frenchToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)FrenchToast.cpp;
clean: 
	rm *.o
