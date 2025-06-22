#include <iostream>
using namespace std;

/*
	- ��������� ���� �����ϴ� ���� ĸ��ȭ�� ���� ����
	- �Ű������� �ִ� ������ ����� ����

*/

class Dog {
public:
	string type;  //����
	int age;      //����

	//������
	Dog() {}  //�⺻ ������
	
	//�Ű�����(����)�� �ִ� ������
	Dog(string _type, int _age){
		type = _type;
		age = _age;
	}

	void bark() {
		cout << "��~ ��~\n";
	}

	void displayInfo() {
		cout << "������ ���� : " << type << endl;
		cout << "������ ���� : " << age << endl;
	}
};

int main() {
	//������ 1���� ����
	Dog dog1;
	dog1.type = "������";
	dog1.age = 3;
	
	dog1.displayInfo();
	dog1.bark();

	//������ �ν��Ͻ� ����
	Dog dog2("��Ƽ��", 1);
	dog2.displayInfo();
	dog2.bark();

	return 0;
}