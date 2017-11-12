/*
 * bitshift.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: shreenidhi
 */

#include <iomanip>
#include <iostream>
#include "../../compilerswitch.h"

#if BIT_SHIFT_
void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n/2);
    /* step 2 */
    std::cout<<n % 2;
}

int main(int argc, char **argv) {
	int i=14;
	std::cout<<"Before bitshift"<<std::endl;
	std::cout<<"Decimal Value : "<<i<<std::endl;
	bin(i);
	std::cout<<""<<std::endl;
	i=i<<1;
	std::cout<<"After shift"<<std::endl;
	bin(i);
	std::cout<<""<<std::endl;
	std::cout<<"Decimal Value : "<<i<<std::endl;
	return 0;
}

#endif
