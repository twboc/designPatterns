# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/MVC;
	
main.o: toastController.o
	$(CC) -c $(mainFile);
	
toastModel.o: 
	$(CC) -c $(INCLUDE_PATH)ToastModel.cpp;
	
toastView.o: 
	$(CC) -c $(INCLUDE_PATH)ToastView.cpp;
	
toastController.o: toastModel.o toastView.o
	$(CC) -c $(INCLUDE_PATH)ToastController.cpp;
		
clean: 
	rm *.o
