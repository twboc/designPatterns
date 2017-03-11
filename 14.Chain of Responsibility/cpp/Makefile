# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/ChainOfResponsibility;
	
main.o: toastMaker.o breadToast.o butterToast.o jamToast.o
	$(CC) -c $(mainFile);
	
toastMaker.o:
	$(CC) -c $(INCLUDE_PATH)ToastMaker.cpp
	
breadToast.o: toastMaker.o
	$(CC) -c $(INCLUDE_PATH)BreadToast.cpp
	
butterToast.o: toastMaker.o
	$(CC) -c $(INCLUDE_PATH)ButterToast.cpp
	
jamToast.o: toastMaker.o
	$(CC) -c $(INCLUDE_PATH)JamToast.cpp
	

		
clean: 
	rm *.o
