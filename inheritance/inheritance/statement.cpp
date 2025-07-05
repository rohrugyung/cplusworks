#include <iostream>
using namespace std;

class Drink {
protected:
	string name;  //��ǰ��
	int price;    //����
	int quantity;  //����

public:
	Drink(string name, int price , int quantity) : 
		name(name), price(price), quantity(quantity){}

	//�ݾ� = ���� * ����
	int calcPrice() {
		return price * quantity;
	}

	//����(title) ��
	static void printTitle() {
		cout << "��ǰ\t����\t����\t�ݾ�\n";
	}

	//������ ���
	void printData() {
		cout << name <<"\t" << price << "\t" <<
			quantity << "\t" << calcPrice() << endl;
 
	}
};

//Drink�� ����� Alcohol Ŭ���� ����
class Alcohol : public Drink {
private:
	float alcper; //���� ����

public:
	Alcohol(string name, int price, int quantity, float alcper) :
		Drink(name, price, quantity), alcper(alcper){}  //�θ� ������ ���

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

	Drink coffee("Ŀ��", 2500, 4);
	Drink tea("����", 3000, 3);

	cout << "======= ���� ��ǥ =======\n";
	//Drink::printTitle();  //������
	//coffee.printData();
	//tea.printData();

	//�迭�� ����
	Drink drinks[2] = { coffee, tea };
	int total_drink = 0;

	Drink::printTitle();
	for (Drink drink : drinks) {
		drink.printData();
		total_drink += drink.calcPrice();
	}

	cout << "*** ���� �հ�ݾ�: " << total_drink << "�� ***\n\n" << endl;
	cout << endl;

	//�ַ� �ν��Ͻ� ����
	Alcohol soju("����", 4000, 2, 15.1f);
	Alcohol beer("����", 2500, 3, 5.4f);

	//�迭�� ����
	Alcohol alcohols[2] = { soju, beer };
	int total_alcohol = 0;

	Alcohol::printTitle();
	for (Alcohol alcohol : alcohols) {
		alcohol.printData();
		total_alcohol += alcohol.calcPrice();
	}

	cout << "*** �ַ� �հ�ݾ�: " << total_alcohol << "�� ***" << endl;

	int sum = total_drink + total_alcohol;

	cout << "*** �� �հ�ݾ�: " << sum << "�� ***" << endl;

	return 0;
}