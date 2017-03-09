# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Proxy;
	
main.o: tastyPolishToast.o toastDispencer.o
	$(CC) -c $(mainFile);
	
tastyPolishToast.o: 
	$(CC) -c $(INCLUDE_PATH)TastyPolishToast.cpp;
	
toastDispencer.o: tastyPolishToast.o heavyWeightToastMaker.o
	$(CC) -c $(INCLUDE_PATH)ToastDispencer.cpp;
	
heavyWeightToastMaker.o:
	$(CC) -c $(INCLUDE_PATH)HeavyWeightToastMaker.cpp;
		
	
#	TastyPolishToast
#	ToastDispencer
#	HeavyWeightToastMaker
clean: 
	rm *.o
