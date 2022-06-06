/****************************************************************************
 File name:  arraysAndFunctionPointers.c
 Author:     chadd williams
 Date:       June 6, 2022
 Class:      CS 300
 Assignment: In Class Function Pointer Lab
 Purpose:    Practice with arrays, function pointers, and qsort
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/****************************************************************************
 Function: 	 		printInt

 Description: 	Print the int stored in the array element to the screen

 Parameters:		value - the int

 Returned:	 		none
 ****************************************************************************/
void printInt(int value)
{
	// TODO: Implement this function

}



int gSum = 0;
/****************************************************************************
 Function: 	 		sumInt

 Description: 	Add the int to a global running total

 Parameters:		value - the int

 Returned:	 		none
 ****************************************************************************/
void sumInt(int value)
{
	// TODO: Implement this function

}



/****************************************************************************
 Function: 	 		visitArray

 Description: 	call the function visitor on every element in the array

 Parameters:		pArray - the array
								arraySize - the size of the array
								visitor - the function pointer

 Returned:	 		none
 ****************************************************************************/
void visitIntArray(int* pArray, unsigned int arraySize,
		void (*visitor)(int))
{
  // TODO: Implement this function

}


/****************************************************************************
 Function: 	 		main

 Description: 	Demonstrate function pointers

 Parameters:		none

 Returned:	 		none
 ****************************************************************************/
int main()
{

	int *pIntArray;

	int i;
	unsigned int arraySize;


	// Fill the array with random data.
	srand(1138);
	arraySize = (rand() % 10) + 10;

	pIntArray =  malloc(sizeof(int) * arraySize);
	
	for(i=0; i< arraySize; i++)
	{
    pIntArray [i] = rand() % 100;
	}

	// TODO: use visitArray to print all the ints in the array
  
  
  //
  printf("\n\n");

  // TODO: use visitArray to sum all the ints into gSum.
  

  //
  printf("gSum: %d \n\n", gSum);


	// TODO: use visitArray to print on the integers greater than 50
  // you will need to add a function to do this


  //
  printf("\n\n");

	// TODO: Deallocate memory
  


	return EXIT_SUCCESS;
}


