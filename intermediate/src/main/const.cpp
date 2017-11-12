/*
 * const.cpp
 *
 *  Created on: Nov 1, 2017
 *      Author: shreenidhi
 */

#include <iostream>
#include "../../compilerswitch.h"

/*	const members are initialized when they declared
 *
 *
 * */
#if CONST_
#include <iostream>
using namespace std;

int fun(int* ptr)
{
    return (*ptr + 10);
}

int main(void)
{
    const int val = 10;
    const int *ptr = &val;
    int *ptr1 = const_cast <int *>(ptr);
    cout << fun(ptr1);
    return 0;
}


#endif
