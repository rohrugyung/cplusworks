#include <iostream>
using namespace std;


class Car {
	string model;
	int year;

public:
	Car(string model, int year);
	
	void drive();
	void showInfo();
};

//������
Car::Car(string model, int year) {
	//this�� ȭ��ǥ ������ ���(.������ ��� �Ұ�)
	this->model = model;
	this->year = year;
}

void Car::drive() {
	cout << this->model << "��(��) �޸��ϴ�.\n";
}

void Car::showInfo() {
	cout << "�𵨸� : " << this->model << endl;
	cout << "���� : " << this->year << endl;
}

int main() {
	/*Car car1("Ionic6", 2023);
	car1.showInfo();
	car1.drive();

	cout << endl;

	Car car2("�ƹݶ�", 2016);
	car2.showInfo();
	car2.drive();*/

	Car cars[3] = {
		Car("Ionic6", 2023),
		Car("�ƹݶ�", 2016),
		Car("k7", 2025),
	};

	for (int i = 0; i < 3; i++) {
		cars[i].showInfo();
		cars[i].drive();
		cout << "----------------------------\n";
	}
	
	return 0;
}