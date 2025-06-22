#include <iostream>
using namespace std;

/*
	- ���� ������ : private, public
					��� ������ �⺻������ private �Ӽ�
					�Լ� ���� : set + ��������̸�(), get + ��������̸�()
*/

class Dog {
private:
	string type;
	int age;
	
public:

	//Dog() {}  //�⺻ ������

	//������(setter)
	void setType(string _type) {
		type = _type;
	}

	void setAge(int _age) {
		age = _age;
	}

	//������(getter)
	string getType() {
		return type;
	}

	int getAge() {
		return age;
	}
};

int main() {
	
	Dog dog1;
	//dog1.type ���� �Ұ�

	dog1.setType("������");
	dog1.setAge(3);

	cout << "������ ���� : " << dog1.getType() << endl;
	cout << "������ ���� : " << dog1.getAge() << endl;

	return 0;
}