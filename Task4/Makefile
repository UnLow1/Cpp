OBJS = figura.o trojkat.o punkt.o pierscien.o kolo.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all : p1


p1 : main.o $(OBJS)
    $(CC) $(LFLAGS) main.o $(OBJS) -o p1
	
main.o: main.cpp figura.h trojkat.h punkt.h pierscien.h kolo.h
    g++ -c main.cpp	

Pierscien.o : Pierscien.h Pierscien.cpp Kolo.h
	$(CC) $(CFLAGS) Pierscien.cpp	
	
Kolo.o : Kolo.h Kolo.cpp Figura.h
    $(CC) $(CFLAGS) Kolo.cpp

Trojkat.o : Trojkat.h Trojkat.cpp Figura.h Punkt.h
    $(CC) $(CFLAGS) Trojkat.cpp

Figura.o : Figura.h Figura.cpp Punkt.h 
    $(CC) $(CFLAGS) Figura.cpp

Punkt.o : Punkt.h Punkt.cpp 
    $(CC) $(CFLAGS) Punkt.cpp
	