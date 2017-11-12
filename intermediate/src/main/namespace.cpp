/*
 * pointers.cpp
 *
 *  Created on: Nov 2, 2017
 *      Author: shreenidhi
 */



#include <iostream>
#include "../../compilerswitch.h"

#if POINTERS_

namespace first{
int i=1;
void display(){
	std::cout<<"I am from the first space"<<std::endl;
}
}
namespace second {
int i=2;
void display(){
	std::cout<<"I am from the second space"<<std::endl;
}

}  // namespace second


int main(int argc, char **argv) {
	using namespace first;
	using namespace second;
	std::cout<<first::i<<" "<<second::i<<std::endl;
	first::display();
	return 0;
}



#endif
