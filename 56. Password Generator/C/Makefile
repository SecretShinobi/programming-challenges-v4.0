all: passGen

clean:
	rm -f libParseArgs.o libPassGen.o passGen

libParseArgs.o: libParseArgs.c libParseArgs.h 
	gcc -g -Wall -c libParseArgs.c  

libPassGen.o: libPassGen.c libPassGen.h 
	gcc -g -Wall -c libPassGen.c 

passGen: passGen.c libParseArgs.o libPassGen.o
	gcc -g -o passGen passGen.c libParseArgs.o libPassGen.o
