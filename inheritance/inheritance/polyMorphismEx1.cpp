#include <iostream>
using namespace std;

/*
	다형성 - 주로 상속관계에서 나타나는 특성
	- 부모 클래스형으로 인스턴스 생성(부모 > 자식) : 자동 형변환
	- 자신 클래스로 인스턴스 생성
	- new, delete 사용
*/
class Animal {
public:
	/*Animal(){}*/
	//virtual 추상함수를 사용할 시에는 반드시 소멸자를 명시해야 한다.
	//delete시에 메모리 해제가 되지 않아 메모리 누수 현상이 발생하기 때문이다.
	virtual ~Animal() {}
	
	void breath() {
		cout << "동물은 숨을 쉽니다.\n";
	}

	//가상(추상)으로 정의
	/*virtual void cry() {}*/  //상속 받는 쪽에서 반드시 구현해야 함.
	virtual void cry() = 0;  //순수 가상(추상) 함수
};

class Cat : public Animal {
	void cry() {
		cout << "야~~옹!\n";
	}
};

class Dog : public Animal {
	void cry() {
		cout << "왈~~왈!\n";
	}
};

int main() {

	//new 사용 -> 메모리(heap)
	/*Cat* cat = new Cat;
	cat->breath();*/

	//부모 클래스 형으로 인스턴스 생성
	Animal* cat = new Cat;
	cat->breath();
	cat->cry();
	
	Animal* dog = new Dog;
	dog->breath();
	dog->cry();

	delete cat;
	delete dog;

	return 0;
}