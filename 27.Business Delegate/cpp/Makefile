# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer:  main.o
	$(CC) main.o $(FLAGS) -o bin/BusinessDelegate;
	
main.o: toastDelegate.o client.o
	$(CC) -c $(mainFile);
	
toast.o:
	$(CC) -c $(INCLUDE_PATH)Toast.cpp
	
frenchToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)FrenchToast.cpp
	
polishToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)PolishToast.cpp
	
toastLookup.o: frenchToast.o polishToast.o
	$(CC) -c $(INCLUDE_PATH)ToastLookup.cpp
	
toastDelegate.o: toast.o toastLookup.o
	$(CC) -c $(INCLUDE_PATH)ToastDelegate.cpp
	
client.o:
	$(CC) -c $(INCLUDE_PATH)Client.cpp
	
clean: 
	rm *.o
