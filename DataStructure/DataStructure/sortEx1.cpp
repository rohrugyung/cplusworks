#include <iostream>
using namespace std;

int main() {

	//�������� ���� - �ܼ� ����
	int a[5] = { 3, 2, 5, 4, 1 };
	int temp;

	cout << size(a) << endl;  //5

	for (int i = 0; i < size(a) -1 ; i++) {
		for (int j = i+1; j < size(a); j++) {
			if (a[i] > a[j]) {  //�ڸ� �ٲ�
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	//���
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}

	return 0;
}