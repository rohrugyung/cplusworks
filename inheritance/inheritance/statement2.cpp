#include <iostream>
using namespace std;
/*
	���� ��ǥ ���α׷��� ���������� ����
	1. virtual �Լ� ��� -> ��ӹ޴� Ŭ�������� ����
	2. new ~ delete �θ������� �ν��Ͻ� ����
*/
class Drink {
protected:
	string name;  //��ǰ��
	int price;    //����
	int quantity;  //����

public:
	Drink(string name, int price, int quantity) :
		name(name), price(price), quantity(quantity) {
	}

	//�Ҹ��� ���
	virtual ~Drink(){}

	//�ݾ� = ���� * ����
	int calcPrice() {
		return price * quantity;
	}

	//����(title) ��
	static void printTitle() {
		cout << "��ǰ\t����\t����\t�ݾ�\n";
	}

	//������ ���
	virtual void printData() = 0;
};

class NonAlcohol : public Drink {
public:
	NonAlcohol(string name, int price, int quantity) : 
		Drink(name, price, quantity) {}

	//printData() - �ݵ�� ����
	void printData() {
		cout << name << "\t" << price << "\t" <<
			quantity << "\t" << calcPrice() << endl;
	}
};

//Drink�� ����� Alcohol Ŭ���� ����
class Alcohol : public Drink {
private:
	float alcper; //���� ����

public:
	Alcohol(string name, int price, int quantity, float alcper) :
		Drink(name, price, quantity), alcper(alcper) {
	}  //�θ� ������ ���

//�Լ� ����������
	static void printTitle() {
		cout << "��ǰ��(����[%])\t����\t����\t�ݾ�\n";
	}

	void printData() {
		cout << name << "(" << alcper << ")\t" << price << "\t" <<
			quantity << "\t" << calcPrice() << endl;
	}
};

int main() {

	//���������� �ν��Ͻ� ����
	//����(�θ�) Ŭ������ �ν��Ͻ� ����
	Drink* coffee = new NonAlcohol("Ŀ��", 2500, 4);
	Drink* tea = new NonAlcohol("����", 3000, 3);
	Drink* soju = new Alcohol("����", 4000, 2, 15.1f);

	Drink* drinks[3] = { coffee, tea, soju };

	cout << "======= ���� ��ǥ =======\n";
	Drink::printTitle();
	for (auto drink : drinks)
		drink->printData();

	//�ݾ� ���
	int total = 0;
	for (auto drink : drinks)
		total += drink->calcPrice();

	cout << "********** �հ�ݾ� " << total << "�� *********\n";

	delete coffee;
	delete tea;
	delete soju;

	return 0;
}