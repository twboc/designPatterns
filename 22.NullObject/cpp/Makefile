# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/NullObject;
	
main.o: toastDispencer.o toast.o burnedToast.o tastyPolishToast.o
	$(CC) -c $(mainFile);
	
toastDispencer.o: tastyPolishToast.o burnedToast.o
	$(CC) -c $(INCLUDE_PATH)ToastDispencer.cpp;
	
toast.o: 
	$(CC) -c $(INCLUDE_PATH)Toast.cpp;
	
tastyPolishToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)TastyPolishToast.cpp;
	
burnedToast.o: toast.o
	$(CC) -c $(INCLUDE_PATH)BurnedToast.cpp;

clean: 
	rm *.o
