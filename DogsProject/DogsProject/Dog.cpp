//dog.cpp

#include "dog.h"

//������ ����
Dog::Dog(string type, int age) {
	this->type = type;
	this->age = age;
}

//getType() ����
string Dog::getType() {
	return type;
}

//getType() ����
int Dog::getAge() {
	return age;
}