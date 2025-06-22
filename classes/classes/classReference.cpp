#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;

public:
	//������ - �ʱ�ȭ ���
	Point(int x = 0, int y = 0) : x(x), y(y){}

	int getX() { return x; }
	int getY() { return y; }
};

class Circle {
private:
	Point center;  //�߽���(Point Ŭ���� ����)
	int radius;  //������

public:
	//������ - �ʱ�ȭ ���
	Circle(int x, int y, int radius) : center(x, y), radius(radius) {}

	/*Circle(int x, int y, int radius) {
		this->x = x;
		this->y = y;
		this->radius = radius;
	}*/

	void displayInfo() {
		cout << "�߽���(" << this->center.getX() << ", " << center.getY() << "), ������ "
			<< radius << endl;
	}
};

int main() {

	Circle c1(2, 3, 5);

	c1.displayInfo();

	return 0;
}