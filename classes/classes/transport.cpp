#include <iostream>
using namespace std;

//bus class 정의
class Bus {
	int busnumber;  //버스 번호
	int passenger;  //승객수
	int money;      //수입
	const int fee;  //버스 요금(상수)

public:
	//생성자 초기화 방법
	Bus(int busnumber, int fee = 1500) : busnumber(busnumber), 
		passenger(0), money(0), fee(fee) {}

	void take();  //승객을 태운다.
	int getFee();  //요금 가져오기
	void displayInfo();  //버스의 정보 출력
};

//선언부와 구현부를 분리
void Bus::take() {
	money += fee;  //money = money + fee;
	passenger++;
}

int Bus::getFee() { return fee; }

void Bus::displayInfo() {
	cout << busnumber << "번 버스: "
		<< "수입: " << money << "원 "
		<< "승객: " << passenger << "명\n";
}

//Person 클래스 정의
class Person {
private:
	string name;  //이름
	int money;    //가진 돈
	
public:
	Person(string name, int money) : name(name), money(money) {}

	void takeBus(Bus& bus);  //버스에  탄다(bus 클래스 참조), &-참조연산자(복사기능)
	void displayInfo();
};

void Person::takeBus(Bus& bus) { 
	if (money >= bus.getFee()) {
		bus.take();
		money -= bus.getFee();  //가진 돈에서 요금만큼 차감됨.
	}
	
	else {
		cout << "잔액 부족\n";
	}
	
}

void::Person::displayInfo() {
	cout << name << ": 잔액 " << money << "원\n";
}


int main() {
	
	Bus bus330(330, 1500);
	Person lee("이정우", 10000);
	Person shin("신유진", 2000);

	//버스에 탑승
	lee.takeBus(bus330);
	shin.takeBus(bus330);
	shin.takeBus(bus330);

	//정보 출력
	lee.displayInfo();
	shin.displayInfo();
	bus330.displayInfo();

	return 0;
}