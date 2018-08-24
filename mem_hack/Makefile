all: mem_hack clean

mem_hack: main.o tools.o routines.o hack.o cloop.o
	cc -o main main.o tools.o routines.o hack.o cloop.o

main.o: main.c tools.h routines.h hack.h cloop.h 
	cc -c main.c

tools.o: tools.c
	cc -c tools.c

routines.o: routines.c tools.h hack.h
	cc -c routines.c

hack.o: hack.c
	cc -c hack.c

cloop.o: cloop.c routines.h
	cc -c cloop.c

delete:
	rm -rf *.o main

clean:
	rm -rf *.o

run:
	./main