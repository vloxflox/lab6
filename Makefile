all: myProgram

myProgram: main.o libmylib.a #libmylib.a is the dependency for the executable
		gcc -lm -o myProgram main.o -L. -lmylib

main.o: src/main.cpp
		gcc -O -c src/main.cpp -I.

mathBasic.o: src/mathBasic.cpp include/mathBasic.h
		gcc -O -c src/mathBasic.cpp -I.

libmylib.a: mathBasic.o
		ar rcs libmylib.a mathBasic.o

libs: libmylib.a

clean:
		rm -f myProgram *.o *.a *.gch #This way is cleaner than your clean