#include <iostream>
using namespace std;

class Person {
private:
	string name;

public:
	//Person(){}
	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}
};

//Person�� ����� student Ŭ���� 
class Student : public Person {
	int studentId;  //�й�

public:
	void setStudentId(int studentId) {
		this->studentId = studentId;

	}

	int getStudentId() {
		return studentId;
	}
};



int main() {

	Person p1;
	p1.setName("������");
	cout << "�θ��� �̸�: " << p1.getName() << endl;

	Student st1;
	st1.setName("������");  //�θ��� �Լ� ȣ��
	st1.setStudentId(1001); //�ڽ��� �Լ� ȣ��

	cout << "�л��� �̸�: " << st1.getName() <<
		", �й�: " << st1.getStudentId() << endl;

	return 0;
}