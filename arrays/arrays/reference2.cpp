#include <iostream>
using namespace std;

/*
	������ - ���۷���(������ ������ ������ ���̴� ���)
	<�ڷ���& ����������>
	- ������ó�� �ּҸ� ����Ų�ٷ� �����ϸ� ��!
*/

void swapVal(int, int);
void swapRef(int&, int&);
void swapRef2(int*, int*);
int main() {
	//������ ��ȯ
	int x = 10, y = 20;

	cout << "���� ���� ȣ��\n";
	swapVal(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	cout << "������ ���� ȣ��\n";
	swapRef(x, y);
	cout << "x = " << x << ", y = " << y << endl;
	
	cout << "�����Ϳ� ���� ȣ��\n";
	swapRef2(&x, &y);
	cout << "x = " << x << ", y = " << y << endl;

	return 0;
}

void swapVal(int a, int b) {
	int temp;  //��������
	temp = a;
	a = b;
	b = temp;

}

//������ ��ȯ �Լ�
void swapRef(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//������ ���� �Լ�
void swapRef2(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}