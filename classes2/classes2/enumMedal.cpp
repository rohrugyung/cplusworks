#include <iostream>
using namespace std;

enum MEDAL {
	GOLD = 1,
	SILVER,
	BRONZE
};

int main() {
	//enum MEDAL medal;
	//medal = SILVER;  //2
	//int medal = SILVER;
	

	int medal;
	cout << "�޴� ����(1 ~ 3 �Է�) : ";
	cin >> medal;

	switch (medal) {
	case 1:
		cout << "�ݸ޴�\n"; break;
	case 2:
		cout << "���޴�\n"; break;
	case 3:
		cout << "���޴�\n"; break;
	default:
		cout << "�޴��� �����ϴ�. �ٽ� �Է��ϼ���\n";
	}

	return 0;
}