#include <iostream>
using namespace std;

class Person {
protected:
	string name;

public:
	Person(string name) : name(name){}
	//Person(string name) {
	//	this->name = name;
	//}

	void greet() {
		cout << "안녕하세요. 이름: " << name << endl;
	}

	//Person 클래스의 정보 출력 함수
	void displayInfo() {
		cout << "Person name: " << name << endl;
	}
};

//Person을 상속한 student 클래스 
class Student : public Person {
	int studentId;  //학번

public:
	Student(string name, int studentId) : 
		Person(name), studentId(studentId){}  //부모 멤버 생성자 상속

	//함수 재정의
	void greet() {
		cout << "안녕하세요. 이름: " << name <<  //name 접근 가능 - protected이므로
			", 학번: " << studentId << endl;
	}

	//Student 클래스의 정보 출력 함수 - 함수 오버라이딩
	void displayInfo() {
		cout << "Student name: " << name << endl;
		
	}
};



int main() {

	Person p1("이종범");
	p1.greet();
	p1.displayInfo();

	Student st1("이정후", 101);
	st1.greet();
	st1.displayInfo();

	return 0;
}