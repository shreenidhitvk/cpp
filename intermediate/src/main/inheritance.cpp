/*
 * inheritance.cpp
 *
 *  Created on: Nov 1, 2017
 *      Author: shreenidhi
 */

#include <iostream>
#include "../../compilerswitch.h"

#if INHERITANCE_

/*
 * One bite is usually used to maintain the different address for the new objects created
 * */

class Super {
public:
	Super(){
		std::cout<<"Super : Default  ctor"<<std::endl;
	}
	 void emoty(){}
private:
	int* ptr_i;
};
class child:virtual public  Super{

};


int main(int argc, char **argv) {
	Super s;
	child c;
	std::cout<<sizeof(s)<<std::endl;
	std::cout<<sizeof(c)<<std::endl;

}

#endif




