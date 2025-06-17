#include <iostream>
using namespace std;  //�̸�����(std) ����
/*
	c++�� �߰��� �ڷ��� - bool, string
*/
int main() {

	//������ �ڷ�
	char ch1 = 'A';  //1byte
	char ch2 = 65;  //�ƽ�Ű �ڵ尪 = A
	char ch3[] = "��"; //c��� �迭�� ���� ����
	string str1 = "��";  //���ڿ� �ڷ���  - string
	string str2 = "apple";

	cout << ch1 << ", " << ch2 << endl;
	cout << ch3 << endl;
	cout << str1 << ", " << str2 << endl;

	//bool �ڷ��� - true(1) / false(0)
	bool val;
	val = true;  //1byte

	cout << val << endl;  //1

	val = false;
	cout << val << endl;  //0

	int n1 = 10, n2 = 20;
	bool b1, b2;

	b1 = (n1 < n2);
	b2 = (n1 == n2);

	cout << b1 << endl;  //1
	cout << b2 << endl;  //0

	//���� ������ - (��) ? �� : ����
	int result1 = (n1 > n2) ? 1 : 0;
	string result2 = (n1 > n2) ? "true" : "false";

	cout << result1 << endl;  //0
	cout << result2 << endl;  //false

	return 0;
}