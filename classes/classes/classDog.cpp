#include <iostream>
using namespace std;
/*
	c++은 모두 사용
	배열(array) - 같은(한가지) 유형의 여러개의 자료를 저장하는 자료형
	구조체(struct) - 여러 개 유형의 자료형을 묶어 놓은 복합 자료형
	클래스(class) - 여러 개의 자료형과 변수(속성), 여러개의 함수(기능)을 포함한 자료형
	             - c언어의 구조체에 함수가 포함된 형태
	클래스의 구성요소 - 멤버 변수, 생성자(필수), 멤버 함수
	                - 기본 생성자(constructor)는 생략되면 컴파일러가 처리 해준다.
					- 소멸자도 생략하면 컴파일러가 처리 해줌.
*/                

//Dog 클래스 정의
class Dog {
	//멤버 변수
public:  //외부에서 접근 가능
	string type;  //종류
	int age;  //나이

	Dog() {}  //기본 생성자(생략 가능)
	
	~Dog() {  //소멸자(destructor)
		cout << "객체가 소멸합니다.\n" << endl;
	}

	//멤버 함수
	void bark() {
		cout << "왈~왈~\n";
	}
};

int main() {
	//클래스 사용 = 인스턴스(객체) 생성
	//클래스 이름 인스턴스(객체)
	//Dog dog1 = Dog();  Dog() - 생성자 스타일
	Dog dog1;
	
	//멤버에 접근시에 점(.) 연산자 사용
	dog1.type = "진돗개";
	dog1.age = 3;
	

	cout << "강아지 종류 : " << dog1.type << endl;
	cout << "강아지 나이 : " << dog1.age << endl;
	dog1.bark();  //위 함수에 이미 cout을 입력해놨기 때문에 별도로 cout을 입력할 필요가 없다!
	cout << "------------------------------------\n";

	Dog dog2;  //dog2 인스턴스(객체) 생성
	dog2.type = "말티즈";
	dog2.age = 1;

	cout << "강아지 종류 : " << dog2.type << endl;
	cout << "강아지 나이 : " << dog2.age << endl;
	dog2.bark();

	return 0;
}