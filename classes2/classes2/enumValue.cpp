#include <iostream>
using namespace std;

//������ ��� �ڷ��� - �빮��(����)
//�⺻ �ε��� 0���� ������
enum VALUE {
	VALUE_A = 1,  //1�� ����ϸ� 1���� ������ 
	VALUE_B, 
	VALUE_C
};

enum SEASON {
	�� = 1,
	����, 
	����,
	�ܿ�
};

int main() {

	//enum �ڷ� ���
	enum VALUE val;
	val = VALUE_A;

	cout << val << endl;  //1

	//SEASON ���
	enum SEASON season;
	season = ����;

	if(season == 2) 
		cout << "���� ������ �����Դϴ�.\n";
	else
		cout << "���� ������ ������ �ƴմϴ�.\n";

	//��� ����
	/*const int  VALUE_A = 1;
	const int  VALUE_B = 2;

	cout << VALUE_A << endl;
	cout << VALUE_B << endl;*/

	return 0;
}