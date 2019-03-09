all: mem_hack clean

mem_hack: main.o tools.o routines.o hack.o cloop.o
	cc -o main main.o tools.o routines.o hack.o cloop.o

main.o: main.c tools/tools.h routines/routines.h hack/hack.h cloop/cloop.h 
	cc -c main.c

tools.o: tools/tools.c
	cc -c tools/tools.c

routines.o: routines/routines.c tools/tools.h hack/hack.h
	cc -c routines/routines.c

hack.o: hack/hack.c
	cc -c hack/hack.c

cloop.o: cloop/cloop.c routines/routines.h
	cc -c cloop/cloop.c

delete:
	rm -rf *.o main

clean:
	rm -rf *.o

run:
	./main
