#include <iostream>
using namespace std;


class Car {
	string model;  //모델명
	int year;  //연식

public:
	Car(string model, int year);

	void drive();
	void showInfo();
};

//생성자
Car::Car(string model, int year) {
	//this에 화살표 연산자 사용(.연산자 사용 불가)
	this->model = model;
	this->year = year;
}

void Car::drive() {
	cout << this->model << "가(이) 달립니다.\n";
}

void Car::showInfo() {
	cout << "모델명 : " << this->model << endl;
	cout << "연식 : " << this->year << endl;
}

int main() {
	//Car car1("소나타", 2020);  //스택 메모리 영역

	//동적 객체 생성 - 힙 메모리 영역, 포인터 사용, 화살표 연산자로 접근
	
	//Car* car1 = new Car("소나타", 2020);

	/*car1->showInfo();
	car1->drive();*/

	//동적 객체 배열
	//매개변수가 있는 생성자
	Car* cars = new Car[3]{
		Car("소나타", 2020),
		Car("아이오닉6", 2024),
		Car("BMW", 2022)
	};
	
	for (int i = 0; i < 3; i++) {
		cars[i].showInfo();  //점 연산자로 접근(화살표 접근 아님!)
	}


	delete[] cars;  //메모리 해제(반납) 1. 인스턴스일 때는 그냥인데, 2. 배열일 때는 delete에 []을 넣어야 한다.


	return 0;
}