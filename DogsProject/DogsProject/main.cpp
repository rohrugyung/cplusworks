//main.cpp
#include "dog.h"

int main() {

	Dog dog1("������", 5);

	cout << "******** ������ ���� ********\n";
	cout << "������ ���� : " << dog1.getType() << endl;
	cout << "������ ���� : " << dog1.getAge() << endl;

	return 0;
}