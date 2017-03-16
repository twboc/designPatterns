# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Template;
	
main.o: polishToast.o
	$(CC) -c $(mainFile);
	
toastRecipe.o: 
	$(CC) -c $(INCLUDE_PATH)ToastRecipe.cpp;
	
polishToast.o: toastRecipe.o
	$(CC) -c $(INCLUDE_PATH)PolishToast.cpp;
		
clean: 
	rm *.o
