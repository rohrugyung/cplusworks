#include <iostream>
using namespace std;

/*
	- 멤버변수에 직접 접근하는 것은 캡슐화에 좋지 않음
	- 매개변수가 있는 생성자 사용이 좋음

*/

class Dog {
public:
	string type;  //종류
	int age;      //나이

	//생성자
	Dog() {}  //기본 생성자
	
	//매개변수(인자)가 있는 생성자
	Dog(string _type, int _age){
		type = _type;
		age = _age;
	}

	void bark() {
		cout << "왈~ 왈~\n";
	}

	void displayInfo() {
		cout << "강아지 종류 : " << type << endl;
		cout << "강아지 나이 : " << age << endl;
	}
};

int main() {
	//강아지 1마리 생성
	Dog dog1;
	dog1.type = "진돗개";
	dog1.age = 3;
	
	dog1.displayInfo();
	dog1.bark();

	//강아지 인스턴스 생성
	Dog dog2("말티즈", 1);
	dog2.displayInfo();
	dog2.bark();

	return 0;
}