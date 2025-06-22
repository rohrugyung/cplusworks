#include <iostream>
using namespace std;

int findMin(int[], int);  //�Լ� �����
int findMinIdx(int[], int); 
int main() {
	//�ּҰ� ã��
	int arr[] = { 3, 8, 1, 6, 2 };
	int min;  //�ּҰ�

	min = findMin(arr, size(arr));
	cout << "�ּҰ� : " << min << endl;

	//�ּҰ� ��ġ ã��
	int minIdx;
	minIdx = findMinIdx(arr, size(arr));
	cout << "�ּҰ��� ��ġ : " << minIdx << endl;  //2
	 
	return 0;
}

//�Լ� ���Ǻ�
int findMin(int a[], int size) {
	int minVal = a[0]; //�ּҰ� ����
	for (int i = 1; i < size; i++) {
		if (minVal > a[i]) {
			minVal = a[i];
		}
	}

	return minVal;
}

//�ּҰ� ��ġ �Լ� ���Ǻ�
int findMinIdx(int a[], int size) {
	int minIdx = 0;  //0���� �ּҰ� ����
	for (int i = 1; i < size; i++) {
		if (a[minIdx] > a[i]) {  //��Ұ��� �ּҰ����� ������ 
			minIdx = i;  //�ε����� �ּҰ����� ����
		}
	}

	return minIdx;
}