# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp

developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Decorator

main.o: toast.o toastBrownBread.o toastWithButter.o toastWithJam.o toastWithSugar.o
	$(CC) -c $(mainFile);
	
toast.o:
	$(CC) -c $(INCLUDE_PATH)Toast.cpp
	
toastBrownBread.o: toast.o
	$(CC) -c $(INCLUDE_PATH)ToastBrownBread.cpp
	
toastWithButter.o: toast.o
	$(CC) -c $(INCLUDE_PATH)ToastWithButter.cpp
	
toastWithJam.o: toast.o
	$(CC) -c $(INCLUDE_PATH)ToastWithJam.cpp
	
toastWithSugar.o: toast.o
	$(CC) -c $(INCLUDE_PATH)ToastWithSugar.cpp
	

			
clean: 
	rm *.o
