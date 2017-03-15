# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Observer;
	
main.o: customer.o preparedToasts.o toastOrder.o waiter.o
	$(CC) -c $(mainFile);
	
customer.o: 
	$(CC) -c $(INCLUDE_PATH)Customer.cpp;
	
preparedToasts.o: 
	$(CC) -c $(INCLUDE_PATH)PreparedToasts.cpp;

toastOrder.o: customer.o
	$(CC) -c $(INCLUDE_PATH)ToastOrder.cpp;
	
waiter.o: toastOrder.o customer.o
	$(CC) -c $(INCLUDE_PATH)Waiter.cpp;
	
cook.o: waiter.o
	$(CC) -c $(INCLUDE_PATH)Cook.cpp;
	
clean: 
	rm *.o
