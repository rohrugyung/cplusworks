#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;

public:
	//생성자 - 초기화 목록
	Point(int x = 0, int y = 0) : x(x), y(y){}

	int getX() { return x; }
	int getY() { return y; }
};

class Circle {
private:
	Point center;  //중심점(Point 클래스 참조)
	int radius;  //반지름

public:
	//생성자 - 초기화 목록
	Circle(int x, int y, int radius) : center(x, y), radius(radius) {}

	/*Circle(int x, int y, int radius) {
		this->x = x;
		this->y = y;
		this->radius = radius;
	}*/

	void displayInfo() {
		cout << "중심점(" << this->center.getX() << ", " << center.getY() << "), 반지름 "
			<< radius << endl;
	}
};

int main() {

	Circle c1(2, 3, 5);

	c1.displayInfo();

	return 0;
}