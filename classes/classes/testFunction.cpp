#include <iostream>
using namespace std;

//�⺻ �Ű�����(Default Parameter)
void take(int busnumber, int fee = 1500) {
	cout << busnumber << "�� ����: "
		<< "��� : " << fee << "��\n";;
}

//���� ����(static variable)
void click() {
	int x = 10;  //�������� - ȣ���Ŀ� ���� �Ҹ���
	static int y = 10;  //ȣ���Ŀ��� ��� ���� ����(���α׷� ����Ǹ� �Ҹ�)

	x++;
	y++;
	cout << "x= " << x << ", y= " << y << endl;
}

int main() {

	//take(100);  //���� ���� �����ϸ� �⺻���� ��µ�.
	//take(100, 2000);

	click();
	click();
	click();


	return 0;
}