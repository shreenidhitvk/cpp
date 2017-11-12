/*
 * stl.cpp
 *
 *  Created on: Nov 3, 2017
 *      Author: shreenidhi
 */

#include <iostream>
#include "../../compilerswitch.h"
#include <vector>
#include <map>
#include <algorithm>

#if STL_


int main(int argc, char **argv) {

	std::vector<int> v_int;
	std::vector< std::vector<int> > matrix;
	v_int.push_back(1);
	v_int.push_back(2);
	v_int.push_back(3);

	std::vector<int>::iterator v_itr;
	for(v_itr=v_int.begin();v_itr!=v_int.end();++v_itr)
	{
		std::cout<<*v_itr<<std::endl;
	}


return 0;
}

#endif

