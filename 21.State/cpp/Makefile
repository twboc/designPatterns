# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/State;
	
main.o: toastMemory.o polishToast.o englishToast.o
	$(CC) -c $(mainFile);
	
toastMemory.o:
	$(CC) -c $(INCLUDE_PATH)ToastMemory.cpp;
	
toast.o:
	$(CC) -c $(INCLUDE_PATH)Toast.cpp;
	
polishToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)PolishToast.cpp;
	
englishToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)EnglishToast.cpp;
	
clean: 
	rm *.o
