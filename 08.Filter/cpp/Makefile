# -*- MakeFile -*-

CC = g++
FLAGS= -w -Wno-pragma-once-outside-header
INCLUDE_PATH = src/
mainFile = $(INCLUDE_PATH)main.cpp


developer: main.o germanToast.o fernchToast.o andCriteria.o orCriteria.o plumToast.o pearToast.o
	$(CC) main.o $(FLAGS) -o bin/Filter;
	
main.o: 
	$(CC) -c $(mainFile);
	
toast.o:
	$(CC) -c $(INCLUDE_PATH)toast/Toast.cpp
	
criteria.o: toast.o
	$(CC) -c $(INCLUDE_PATH)criteria/Criteria.cpp
	
germanToast.o: criteria.o
	$(CC) -c $(INCLUDE_PATH)criteria/GermanToast.cpp
	
fernchToast.o: criteria.o
	$(CC) -c $(INCLUDE_PATH)criteria/FrenchToast.cpp

plumToast.o: criteria.o
	$(CC) -c $(INCLUDE_PATH)criteria/PlumToast.cpp
	
pearToast.o: criteria.o
	$(CC) -c $(INCLUDE_PATH)criteria/PearToast.cpp
	
andCriteria.o: criteria.o
	$(CC) -c $(INCLUDE_PATH)criteria/AndCriteria.cpp

orCriteria.o: criteria.o
	$(CC) -c $(INCLUDE_PATH)criteria/OrCriteria.cpp
	
clean: 
	rm *.o