# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Mediator;
	
main.o: toastWaiter.o customer.o
	$(CC) -c $(mainFile);
	
toastWaiter.o:
	$(CC) -c $(INCLUDE_PATH)ToastWaiter.cpp
	
customer.o:
	$(CC) -c $(INCLUDE_PATH)Customer.cpp
	
toast.o: main.o
	$(CC) -c $(INCLUDE_PATH)Toast.cpp
	
polishToast.o: main.o
	$(CC) -c $(INCLUDE_PATH)PolishToast.cpp
	
frenchToast.o: main.o
	$(CC) -c $(INCLUDE_PATH)FrenchToast.cpp
	
italianToast.o: main.o
	$(CC) -c $(INCLUDE_PATH)ItalianToast.cpp
	
clean: 
	rm *.o
