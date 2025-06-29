#include <iostream>
using namespace std;

class Car {
	string model;  //모델명
	int year;  //연식

//생성자
public:

	//Car(){} - 기본 생성자
	
	//setter
	void setModel(string model) {this->model = model;}

	void setYear(int year) {this->year = year;}

	//getter
	string getModel() { return model; }
	int getYear() { return year; }

	/*void displayInfo() {
		cout << "모델명 : " << getModel() << endl;
		cout << "연식 : " << getYear() << endl;*/
	}
};


int main() {
	
	//동적 개체 배열 생성
	Car* cars = new Car[3];

	//모델명, 연식 저장
	cars[0].setModel("소나타");
	cars[0].setYear(2017);

	cars[1].setModel("아이오닉6");
	cars[1].setYear(2023);

	cars[2].setModel("BMW");
	cars[2].setYear(2020);

	//정보 출력
	cout << "====== 차의 정보 =====\n";

	/*for (int i = 0; i < 3; i++) {
		cars[i].displayInfo();
	}*/

	for (int i = 0; i < 3; i++) {
		cout << "모델명: " << cars[i].getModel() << endl;
		cout << "연식: " << cars[i].getYear() << endl;
		}

	delete[] cars;  //메모리 해제


	return 0;
}