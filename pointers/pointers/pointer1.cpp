#include <iostream>
using namespace std;

int main() {
	
	//���� ������ ����
	//int n = 3;
	//int* p;

	//p = &n;
	//cout << n << endl;  //3
	//cout << *p << endl; //3
	//cout << *p + 10 << endl; //13

	//���� ������ ���� - new Ű���� ���
	int* ptr;
	//ptr = new int;
	//if (ptr == nullptr) {  //c������ NULL�� ����ϳ�, C++������ nullptr�� ����Ѵ�!
	//	cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.\n";
	//	return 0;
	//}

	//*ptr = 5;
	//cout << *ptr << endl;  //5
	//cout << *ptr + 5 << endl;  //10
	//
	//delete ptr;  //�޸� ����
	
	//������ �迭 ���� �Ҵ�
	int* pa;
	pa = new int[10];

	pa[0] = 1;
	pa[1] = 2;
	pa[2] = 3;

	cout << pa[0] << ", " << pa[1] << ", " << pa[2] << endl;

	//*pa = 1;  //*(pa + 0)
	//*(pa + 1) = 2;
	//*(pa + 2) = 3;

	//cout << *pa << ", " << *(pa + 1) << ", " << *(pa + 2) << endl;


	//1���� 10���� ����
	for (int i = 0; i < 10; i++) {
		pa[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << *(pa + i) << " ";
		/*cout << pa[i] << " ";*/
	}
	delete[] pa;  //�޸� ����(�ݳ�)

	return 0;
}