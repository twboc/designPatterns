# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Command;
	
main.o: toast.o toastCook.o recipe.o command.o heatUpTheToast.o addJam.o useBlackBread.o sprinkleWithSugar.o
	$(CC) -c $(mainFile);
	
toast.o:
	$(CC) -c $(INCLUDE_PATH)Toast.cpp;
	
toastCook.o:
	$(CC) -c $(INCLUDE_PATH)ToastCook.cpp;

recipe.o:
	$(CC) -c $(INCLUDE_PATH)Recipe.cpp;
	
command.o:
	$(CC) -c $(INCLUDE_PATH)Command.cpp;

heatUpTheToast.o:
	$(CC) -c $(INCLUDE_PATH)HeatUpTheToast.cpp;
	
addJam.o:
	$(CC) -c $(INCLUDE_PATH)AddJam.cpp;
	
useBlackBread.o:
	$(CC) -c $(INCLUDE_PATH)UseBlackBread.cpp;
	
sprinkleWithSugar.o:
	$(CC) -c $(INCLUDE_PATH)SprinkleWithSugar.cpp;
		
clean: 
	rm *.o
