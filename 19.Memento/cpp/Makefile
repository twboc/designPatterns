# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Memento;
	
main.o: toastMemories.o cafeOfBrokenDreams.o androidsElectricSheep.o
	$(CC) -c $(mainFile);
	
toastMemories.o: 
	$(CC) -c $(INCLUDE_PATH)ToastMemories.cpp;
	
cafeOfBrokenDreams.o: 
	$(CC) -c $(INCLUDE_PATH)CafeOfBrokenDreams.cpp;
	
androidsElectricSheep.o: 
	$(CC) -c $(INCLUDE_PATH)AndroidsElectricSheep.cpp;

clean: 
	rm *.o
