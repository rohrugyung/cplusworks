#include <iostream>
using namespace std;

int main() {
	//������

	int dan;

	cout << "�� �Է�: ";
	cin >> dan;

	for (int i = 1; i < 10; i++) {
		cout << dan << "x" << i << "=" << (dan * i) << endl;
	}
	return 0;
}