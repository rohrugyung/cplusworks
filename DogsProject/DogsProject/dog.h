//dog.h -> Ŭ������ ����� ǥ��
//��� ������ �ߺ����� �ʵ��� �̸� ����
//���Ǻ� ������ ��� ����
#ifndef DOG_H
#define DOG_H  //��ũ�� �̸� ����

#include <iostream>
using namespace std;

class Dog {
private:
	string type;
	int age;

public:
	Dog(string type, int age);
	~Dog(){}

	string getType();
	int getAge();
};

#endif