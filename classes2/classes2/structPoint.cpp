#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;

	//������ ��� �ʱ�ȭ(�⺻ �����ڷ� �ʱ�ȭ�� �� x = 0, y = 0)
	Point(int x = 0, int y = 0) : x(x), y(y){}
};

Point inputPoint() {  //��ȯ �ڷ��� Point
	Point p;  //�⺻ �����ڷ� �ν��Ͻ� ����
	cout << "��ǥ�� �Է��� �ּ���(x, y): ";

	cin >> p.x >> p.y;

	return p;  //��ȯ�� ����(�ӽ� ��ü ����)
}


//&(����������)�� ���̸� ������(Point&) ȣ���� �� 
//��ü ��ü�� ������� �ʰ� �ش� ��ü�� �����.
void printPoint(Point& p, const char* str) {  //str="�Է� ��ǥ"
	cout << "�Է� ��ǥ: " << p.x << ", " << p.y << endl;
}

int main() {

	Point p1;  //�⺻ �����ڷ� �ν��Ͻ� ����

	p1 = inputPoint();  //�Է� �Լ� ȣ��

	printPoint(p1, "�Է���ǥ");  //��� �Լ� ȣ��

	return 0;
}