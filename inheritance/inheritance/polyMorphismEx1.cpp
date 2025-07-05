#include <iostream>
using namespace std;

/*
	������ - �ַ� ��Ӱ��迡�� ��Ÿ���� Ư��
	- �θ� Ŭ���������� �ν��Ͻ� ����(�θ� > �ڽ�) : �ڵ� ����ȯ
	- �ڽ� Ŭ������ �ν��Ͻ� ����
	- new, delete ���
*/
class Animal {
public:
	/*Animal(){}*/
	//virtual �߻��Լ��� ����� �ÿ��� �ݵ�� �Ҹ��ڸ� ����ؾ� �Ѵ�.
	//delete�ÿ� �޸� ������ ���� �ʾ� �޸� ���� ������ �߻��ϱ� �����̴�.
	virtual ~Animal() {}
	
	void breath() {
		cout << "������ ���� ���ϴ�.\n";
	}

	//����(�߻�)���� ����
	/*virtual void cry() {}*/  //��� �޴� �ʿ��� �ݵ�� �����ؾ� ��.
	virtual void cry() = 0;  //���� ����(�߻�) �Լ�
};

class Cat : public Animal {
	void cry() {
		cout << "��~~��!\n";
	}
};

class Dog : public Animal {
	void cry() {
		cout << "��~~��!\n";
	}
};

int main() {

	//new ��� -> �޸�(heap)
	/*Cat* cat = new Cat;
	cat->breath();*/

	//�θ� Ŭ���� ������ �ν��Ͻ� ����
	Animal* cat = new Cat;
	cat->breath();
	cat->cry();
	
	Animal* dog = new Dog;
	dog->breath();
	dog->cry();

	delete cat;
	delete dog;

	return 0;
}