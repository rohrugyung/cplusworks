#include <iostream>
using namespace std;

int main() {

	//������ �迭 ���� �� ����
	int array[] = { 90, 80, 75, 100 };
	int total = 0;  //�հ�
	float average;  //���
	int max;        //�ִ밪

	//cout << array[0] + array[1] << endl;  //170

	//�հ�
	for (int i = 0; i < size(array); i++) {
		total += array[i];  //total = total + array[i]
	}
	cout << "�հ� : " << total << endl;
 
	// ���
	average = (float)total / size(array);  //����ȯ�� �ؾ� �Ҽ��� ������ �ȵ�.
	cout << "��� : " << average << endl;  //86.25

	//�ִ밪
	max = array[0];
	for (int i = 1; i < size(array); i++) {
		if (array[i] > max) {
			max = array[i];
		}  
	}
	cout << "�ִ밪: " << max << endl;

	return 0;
}