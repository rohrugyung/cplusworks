#include <iostream>
using namespace std;

int main() {
	//���� �� - ���� ������ ���
	int n1 = 10;
	int n2 = 10;

	if (n1 == n2) {
		cout << "�μ��� �����ϴ�.\n";

	}
	else {  // n1 != n2
		cout << "�μ��� ���� �ʽ��ϴ�.\n";
	}

	//���� ��
	string str1 = "���";
	string str2 = "��";

	cout << str1.compare("���") << endl;  //0
	cout << str1.compare("�ٳ���") << endl;  //1

	if (str1.compare(str2) == 0) {
		cout << "�� ���ڿ��� ��ġ�մϴ�.\n";
	}
	else {
		cout << "�� ���ڿ��� ��ġ���� �ʽ��ϴ�.\n";
	}

	return 0;
}