#include <iostream>
using namespace std;

class Car {
	string model;  //�𵨸�
	int year;  //����

//������
public:

	//Car(){} - �⺻ ������
	
	//setter
	void setModel(string model) {this->model = model;}

	void setYear(int year) {this->year = year;}

	//getter
	string getModel() { return model; }
	int getYear() { return year; }

	/*void displayInfo() {
		cout << "�𵨸� : " << getModel() << endl;
		cout << "���� : " << getYear() << endl;*/
	}
};


int main() {
	
	//���� ��ü �迭 ����
	Car* cars = new Car[3];

	//�𵨸�, ���� ����
	cars[0].setModel("�ҳ�Ÿ");
	cars[0].setYear(2017);

	cars[1].setModel("���̿���6");
	cars[1].setYear(2023);

	cars[2].setModel("BMW");
	cars[2].setYear(2020);

	//���� ���
	cout << "====== ���� ���� =====\n";

	/*for (int i = 0; i < 3; i++) {
		cars[i].displayInfo();
	}*/

	for (int i = 0; i < 3; i++) {
		cout << "�𵨸�: " << cars[i].getModel() << endl;
		cout << "����: " << cars[i].getYear() << endl;
		}

	delete[] cars;  //�޸� ����


	return 0;
}