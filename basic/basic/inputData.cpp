#include <iostream>
#include <string>  //getline() �Լ� ���
using namespace std;
/*
	�Է� ó��
	cin >> ����
	cin ��Ʈ������ �о�� �����͸� ������ ���� ����
*/
int main() {
	string address;  //�ּҸ� ������ ���� ����

	cout << "�ּҸ� �Է��ϼ���: ";
	/*cin >> address;*/

	//���鹮�ڸ� ������ ���ڿ� ó��
	getline(cin, address);  //string ��� ���� �����ؾ� ��.
	cout << address << endl;

	return 0;
}