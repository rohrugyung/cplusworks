#include <iostream>
using namespace std;

/*
	- Ŭ���� ����ο� ������ �и� ����
	  Ŭ������ ������Ϸ� ��밡��
*/

class Dog {
private:
	string type;
	int age;

public:
	Dog(string _type, int _age);  //������

	string getType();  //��� �Լ�
	int getAge();

};

Dog::Dog(string _type, int _age) {
	type = _type;
	age = _age;
}

string Dog::getType() {
	return type;
}

int Dog::getAge() {
	return age;
}


int main() {
	//Dog dog1("��Ƽ��", 1);
	//cout << "������ ���� : " << dog1.getType() << endl;
	//cout << "������ ���� : " << dog1.getAge() << endl;
	//
	//Dog dog2("������", 3);
	//cout << "������ ���� : " << dog2.getType() << endl;
	//cout << "������ ���� : " << dog2.getAge() << endl;

	//��ü �迭
	Dog dogs[3] = {
		Dog("��Ƽ��", 1),
		Dog("������", 3),
		Dog("��찳", 2)
	};

	//1�� �ε��� ���
	//cout << "������ ���� : " << dogs[1].getType() << endl;
	//cout << "������ ���� : " << dogs[1].getAge() << endl;

	//��ü ���
	for (int i = 0; i < 3; i++) {
		cout << "������ ���� : " << dogs[i].getType() << endl;
		cout << "������ ���� : " << dogs[i].getAge() << endl;
	}

	return 0;
}