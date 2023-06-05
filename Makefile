#############################################################################
# File name:  Makefile
# Author:     chadd williams
# Date:       Sept 1, 2021
# Class:      CS360
# Assignment: 
# Purpose:    
#############################################################################

all: bin bin/arraysAndFunctionPointers

bin:
	mkdir -p bin

bin/arraysAndFunctionPointers: bin bin/arraysAndFunctionPointers.o
	gcc -o bin/arraysAndFunctionPointers -g -Wall bin/arraysAndFunctionPointers.o

bin/arraysAndFunctionPointers.o: src/arraysAndFunctionPointers.c
	gcc -c -o bin/arraysAndFunctionPointers.o -g -Wall src/arraysAndFunctionPointers.c

valgrind: bin/arraysAndFunctionPointers
	valgrind -v --leak-check=yes --track-origins=yes --leak-check=full --show-leak-kinds=all bin/arraysAndFunctionPointers

printAll:
	enscript -C -T 2 -p - -M Letter -Ec --color -fCourier8 src/arraysAndFunctionPointers.c  | ps2pdf - bin/arraysAndFunctionPointers.pdf

clean:
	rm -f bin/arraysAndFunctionPointers bin/*.o bin/*.pdf
