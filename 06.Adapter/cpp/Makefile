# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o
	$(CC) main.o $(FLAGS) -o bin/Adapter;
	
main.o: ForcePlugEuropeanSocket.o Socket.o Adapter.o AmericanToaster.o 
	$(CC) -c $(mainFile);
	
EuroSocketInterface.o: types.o
	$(CC) -c $(INCLUDE_PATH)sockets/EuropeanSocketInterface.cpp
	
AmericanSocketInterface.o: types.o
	$(CC) -c $(INCLUDE_PATH)sockets/AmericanSocketInterface.cpp
	
ForcePlugEuropeanSocket.o: types.o AmericanSocketInterface.o
	$(CC) -c $(INCLUDE_PATH)sockets/ForcePlugEuropeanSocket.cpp
	
Socket.o: EuroSocketInterface.o types.o
	$(CC) -c $(INCLUDE_PATH)sockets/Socket.cpp
	
Adapter.o: types.o EuroSocketInterface.o AmericanSocketInterface.o
	$(CC) -c $(INCLUDE_PATH)/Adapter.cpp
	
AmericanToaster.o: AmericanSocketInterface.o
	$(CC) -c $(INCLUDE_PATH)/AmericanToaster.cpp
	
types.o:
	$(CC) -c $(INCLUDE_PATH)types.cpp
		
clean: 
	rm *.o