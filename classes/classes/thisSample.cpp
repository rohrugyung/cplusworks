#include <iostream>
using namespace std;

/*
	this�� ��� ���� - �ܺ� �Էº����� ��� ������ �̸��� �����ؼ�
	                  ���� �����ÿ� ȿ������ ������ ��
					  (java - this, python - self)
*/

class BirthDay {
private:
	int day;
	int month;
	int year;

public:
	void setYear(int year) {
		//��ü �ڽ��� �޸𸮻��� �ּҸ� ��Ÿ���� ������(this->)
		this->year = year;
	}

	void printThis() {
		cout << this << endl;
	}
};

int main() {

	BirthDay bDay;
	bDay.setYear(2025);

	//��ü�� �ּ� ���
	cout << &bDay << endl;

	//this �ּ�
	bDay.printThis();

	return 0;
}