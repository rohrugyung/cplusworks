#include <iostream>
using namespace std;

/*
	������ - ���۷���(������ ������ ������ ���̴� ���)
	<�ڷ���& ����������>
*/

int main() {
	int n = 1;
	int& x = n;
	int& y = n;

	cout << "x = " << x << ", y = " << y << endl;

	x = 3;
	cout << "x = " << x << ", y = " << y << endl; 

	return 0;
}