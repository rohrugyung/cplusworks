#include <iostream>
using namespace std;
/*
	���(Constant)
	1. ��ũ�� ���
	2. const Ű����
*/
//#define PI 3.141592

int main() {

	//���� ���� = ������ x ������ x ������
	int radius = 6;
	const double PI = 3.141592;
	double circleArea1, circleArea2;

	//PI = 3.14  //	����� ���� �Ұ�

	/*circleArea1 = PI * radius * radius;

	cout << "���� ����: " << circleArea1 << endl;*/

	//�Ҽ� �ڸ��� ����
	cout << fixed;
	cout.precision(6);
	circleArea2 = PI * radius * radius;
	cout << "���� ����: " << circleArea2 << endl;

	return 0;
}