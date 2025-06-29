#include <iostream>
using namespace std;

//�����Ǵ� Ŭ����
class Point {
private:
	int x;
	int y;

public:
	//1. ������ 
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	//������ - �ʱ�ȭ ��� ���(�ʱ�ȭ ����)
	//Point(int x = 0, int y = 0) : x(x), y(y){}

	int getX() { return x; }
	int getY() { return y; }
};

//�����ϴ� Ŭ����
class Circle {
private:
	Point center;  //�߽���(Point Ŭ���� ����)
	int radius;  //������
	const double PI = 3.1415;

public:
	//������ - �ʱ�ȭ ���
	Circle(int x, int y, int radius) : center(x, y), radius(radius) {}

	/*Circle(int x, int y, int radius) {
		this->x = x;
		this->y = y;
		this->radius = radius;
	}*/

	//���� ���� ��� �Լ� (PI * ������ * ������)
	double getArea() {
		return PI * radius * radius;
	}

	void displayInfo() {
		cout << "�߽���(" << center.getX() << ", " << center.getY() << "), ������ "
			<< radius << endl;
	}
};

int main() {

	Circle c1(2, 3, 5);

	c1.displayInfo();
	cout << "���� ���� : " << c1.getArea() << endl;

	Circle c2(10, 10, 10);
	c2.displayInfo();
	cout << "���� ���� : " << c2.getArea() << endl;

	return 0;
}