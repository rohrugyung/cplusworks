#include <iostream>
using namespace std;


class Car {
	string model;  //�𵨸�
	int year;  //����

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
	//Car car1("�ҳ�Ÿ", 2020);  //���� �޸� ����

	//���� ��ü ���� - �� �޸� ����, ������ ���, ȭ��ǥ �����ڷ� ����
	
	//Car* car1 = new Car("�ҳ�Ÿ", 2020);

	/*car1->showInfo();
	car1->drive();*/

	//���� ��ü �迭
	//�Ű������� �ִ� ������
	Car* cars = new Car[3]{
		Car("�ҳ�Ÿ", 2020),
		Car("���̿���6", 2024),
		Car("BMW", 2022)
	};
	
	for (int i = 0; i < 3; i++) {
		cars[i].showInfo();  //�� �����ڷ� ����(ȭ��ǥ ���� �ƴ�!)
	}


	delete[] cars;  //�޸� ����(�ݳ�) 1. �ν��Ͻ��� ���� �׳��ε�, 2. �迭�� ���� delete�� []�� �־�� �Ѵ�.


	return 0;
}