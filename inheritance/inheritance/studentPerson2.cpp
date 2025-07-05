#include <iostream>
using namespace std;

class Person {
protected:
	string name;

public:
	Person(string name) : name(name){}
	//Person(string name) {
	//	this->name = name;
	//}

	void greet() {
		cout << "�ȳ��ϼ���. �̸�: " << name << endl;
	}

	//Person Ŭ������ ���� ��� �Լ�
	void displayInfo() {
		cout << "Person name: " << name << endl;
	}
};

//Person�� ����� student Ŭ���� 
class Student : public Person {
	int studentId;  //�й�

public:
	Student(string name, int studentId) : 
		Person(name), studentId(studentId){}  //�θ� ��� ������ ���

	//�Լ� ������
	void greet() {
		cout << "�ȳ��ϼ���. �̸�: " << name <<  //name ���� ���� - protected�̹Ƿ�
			", �й�: " << studentId << endl;
	}

	//Student Ŭ������ ���� ��� �Լ� - �Լ� �������̵�
	void displayInfo() {
		cout << "Student name: " << name << endl;
		
	}
};



int main() {

	Person p1("������");
	p1.greet();
	p1.displayInfo();

	Student st1("������", 101);
	st1.greet();
	st1.displayInfo();

	return 0;
}