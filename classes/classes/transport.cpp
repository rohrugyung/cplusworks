#include <iostream>
using namespace std;

//bus class ����
class Bus {
	int busnumber;  //���� ��ȣ
	int passenger;  //�°���
	int money;      //����
	const int fee;  //���� ���(���)

public:
	//������ �ʱ�ȭ ���
	Bus(int busnumber, int fee = 1500) : busnumber(busnumber), 
		passenger(0), money(0), fee(fee) {}

	void take();  //�°��� �¿��.
	int getFee();  //��� ��������
	void displayInfo();  //������ ���� ���
};

//����ο� �����θ� �и�
void Bus::take() {
	money += fee;  //money = money + fee;
	passenger++;
}

int Bus::getFee() { return fee; }

void Bus::displayInfo() {
	cout << busnumber << "�� ����: "
		<< "����: " << money << "�� "
		<< "�°�: " << passenger << "��\n";
}

//Person Ŭ���� ����
class Person {
private:
	string name;  //�̸�
	int money;    //���� ��
	
public:
	Person(string name, int money) : name(name), money(money) {}

	void takeBus(Bus& bus);  //������  ź��(bus Ŭ���� ����), &-����������(������)
	void displayInfo();
};

void Person::takeBus(Bus& bus) { 
	if (money >= bus.getFee()) {
		bus.take();
		money -= bus.getFee();  //���� ������ ��ݸ�ŭ ������.
	}
	
	else {
		cout << "�ܾ� ����\n";
	}
	
}

void::Person::displayInfo() {
	cout << name << ": �ܾ� " << money << "��\n";
}


int main() {
	
	Bus bus330(330, 1500);
	Person lee("������", 10000);
	Person shin("������", 2000);

	//������ ž��
	lee.takeBus(bus330);
	shin.takeBus(bus330);
	shin.takeBus(bus330);

	//���� ���
	lee.displayInfo();
	shin.displayInfo();
	bus330.displayInfo();

	return 0;
}