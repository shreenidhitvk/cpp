/*
 * overloading.cpp
 *
 *  Created on: Nov 3, 2017
 *      Author: shreenidhi
 */
#include <iostream>
#include "../../compilerswitch.h"
#include <string>
#include <cstring>

#if OVERLOADING_

class Base {
public:
	Base(const Base& rhs);
	Base();
	void updateName(char* name);
	void getName();
	~Base();
	 Base& operator = (const Base& rhs);

private:
	int i;
	char* name;
};


Base& Base::operator = (const Base& rhs){
	if(this!=&rhs){
		std::cout<<"Non const operator overloaded"<<std::endl;
		delete this->name;
		size_t size= strlen(rhs.name);
		this->name= new char[size+1];
		strcpy(this->name,rhs.name);
	}
	else{
		std::cout<<"cannot assign same object"<<std::endl;
	}

}
Base::~Base(){
	delete this->name;
	std::cout<<"Distructor call"<<std::endl;
	this->name=NULL;
}
void Base::getName(){
	std::cout<<this->name<<std::endl;
}
Base::Base(){
	std::cout<<"Constructor call"<<std::endl;
	name=NULL;
}

Base::Base(const Base& rhs){
	std::cout<<"Copy constructor call"<<std::endl;
	size_t size=strlen(rhs.name);
	this->name=new char[size+1];
	strcpy(this->name,rhs.name);
}

void Base::updateName(char* name){
	delete this->name;
	size_t size=strlen(name);
	this->name=new char[size+1];
	strcpy(this->name,name);
}

int main(int argc, char **argv) {
	Base b;
	b.updateName("Shreenidhi");
	b.getName();
	Base s=b;
	s.getName();
	s.updateName("Turuvekere");
	s.getName();
	s=b;
	s.getName();
	return 0;
}
#endif
