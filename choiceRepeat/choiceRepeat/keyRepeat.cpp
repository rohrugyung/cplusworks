#include <iostream>
using namespace std;
/*
	y or Y -> ��ӹݺ�
	n or N -> �ݺ��ߴ�
	�� �̿��� Ű - �߸��� �Է�
*/

int main() {
	string key;

	while (1) {
		cout << "��� �ݺ��ұ��?(y/n �Է�): ";
		cin >> key;

		//compare() - ���ڿ�(string) �� - ��ġ�ϸ�(0), ����ġ�ϸ�(1)
		if (key.compare("y") == 0 || key.compare("Y") == 0) {
			cout << "��� �ݺ�\n";
		}
		else if (key.compare("n") == 0 || key.compare("N") == 0) {
			cout << "�ݺ� �ߴ�\n";
			break;
		}
		else {
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���\n";
		}
	}

	return 0;
}