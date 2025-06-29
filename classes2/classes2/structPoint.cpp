#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;

	//생성자 목록 초기화(기본 생성자로 초기화할 때 x = 0, y = 0)
	Point(int x = 0, int y = 0) : x(x), y(y){}
};

Point inputPoint() {  //반환 자료형 Point
	Point p;  //기본 생성자로 인스턴스 생성
	cout << "죄표를 입력해 주세요(x, y): ";

	cin >> p.x >> p.y;

	return p;  //반환시 복사(임시 객체 생성)
}


//&(참조연산자)를 붙이면 참조자(Point&) 호출할 때 
//전체 객체가 복사되지 않고 해당 객체만 복사됨.
void printPoint(Point& p, const char* str) {  //str="입력 좌표"
	cout << "입력 좌표: " << p.x << ", " << p.y << endl;
}

int main() {

	Point p1;  //기본 생성자로 인스턴스 생성

	p1 = inputPoint();  //입력 함수 호출

	printPoint(p1, "입력좌표");  //출력 함수 호출

	return 0;
}