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
	cout << "메달 선택(1 ~ 3 입력) : ";
	cin >> medal;

	switch (medal) {
	case 1:
		cout << "금메달\n"; break;
	case 2:
		cout << "은메달\n"; break;
	case 3:
		cout << "동메달\n"; break;
	default:
		cout << "메달이 없습니다. 다시 입력하세요\n";
	}

	return 0;
}