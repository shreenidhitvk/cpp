/*
 * pointertypes.cpp
 *
 *  Created on: Nov 2, 2017
 *      Author: shreenidhi
 */


#include <iostream>
#include "../../compilerswitch.h"

#if PTR_TYPES_

int main(int argc, char **argv) {

	/* Types of pointer
	 * 	- Constant pointer
	 * 	- Pointer to constant
	 * */

	/*
	 * Defection of normal pointer assignment of normal variable and normal pointer
	 * */
	int normal_variable=01;
	int*  ptr=&normal_variable;
	std::cout<<"Normal Pointer pointer normal variable "<<*ptr<<std::endl;

	/*
	 * normal variable can be assigned to constant pointer
	 * */

	int n_variable=10;
	int* const const_ptr=&n_variable;
	std::cout<<"constant Pointer pointer to normal variable  "<<*const_ptr<<std::endl;

	/*
	 * C++ wont allow the assignment of constant variable to normal pointer
	 * This is in order to maintain the constant principle
	 * */
#if 0
	const int c_variable=100;
	int* t_ptr=&c_variable;
	std::cout<<"constant variable normal pointer "<<*t_ptr<<std::endl;
#endif

	/* constant data and constant pointer case
	 * */
	const int c_d_int=1000;
	const int* const ct_ptr=&c_d_int;
	std::cout<<"constant variable constant pointer "<<*ct_ptr<<std::endl;
	/*
	 *  - if the star is on the right side pointer is constant
	 *  - if the star is on the left side then data is constant
	 * */
	return 0;
}

#endif
