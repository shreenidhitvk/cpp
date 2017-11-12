#include <iostream>
#include "../../compilerswitch.h"
#include <string>

#if MAIN_

#define UN_INITIALIZED_DS_ 	1
#define INITIALIZED_DS_ 	0
#define HEAP_				0


/*
 * Memory is divided as follows
 * - Text
 * 		- Most of the instructions will be here
 * 		- AKA Read only segment
 *
 * 	-Data
 * 		- Internally divided into initialized and uninitialized DS
 * 		- By Default uninitialized DS variables are initialized to 0 by compiler
 * 		- uninitialized String , also prints null on console tested in console
 */


#if UN_INITIALIZED_DS_
 int gGlobal;
 std::string name;
#endif

#if INITIALIZED_DS_
 int gGlobal=20;
#endif


int main(int argc, char **argv) {


#if HEAP_
	int* pHeap= new int; // Pointer is on stack but the memory it is pointed to is on heap
	int i=10;
	int* pStack=&i;/	// Pointer and the value it is being pointed is on stack

#endif

	// The Question is how to declare the pointer on heap?
	int ** pPtr= new int*; 	// Pointer to the pointer pPtr is pointing to the new pointer allocated on heap
	*pPtr= new int;			// pointer is pointed to the new integer on heap

	delete *pPtr;
	delete pPtr;

	return 0;
}

#endif
