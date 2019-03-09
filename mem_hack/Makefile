all: mem_hack clean

mem_hack: main.o tools.o routines.o hack.o cloop.o
	cc -o main main.o tools.o routines.o hack.o cloop.o

<<<<<<< HEAD
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
=======
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
>>>>>>> ba0276a187caa9f3643b02b94461cf7ad7e44e30

delete:
	rm -rf *.o main

clean:
	rm -rf *.o

run:
	./main