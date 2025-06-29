#include <iostream>
using namespace std;

//카드번호 자동 발급
class Card {
	static int serialNum;  //시리얼넘버 - 기존넘버, 정적변수
	string name;    //고객 이름
	int cardNumber; //카드 번호

public:
	//생성자
	//Card(string name) {
	//	serialNum++;  // 1증가
	//	cardNumber = serialNum;
	//	this->name = name;
	//}
	
	Card(string name) : name(name), cardNumber(++serialNum) {}

	string getName() { return name; }
	int getCardNumber() { return cardNumber; }

};

//전역 공간
int Card::serialNum = 1000;  //전역 변수

int main() {

	//카드 발급
	Card card1("우상형");
	cout << "고객 이름: " << card1.getName() << endl;
	cout << "카드 번호: " << card1.getCardNumber() << endl;

	Card card2("임서연");
	cout << "고객 이름: " << card2.getName() << endl;
	cout << "카드 번호: " << card2.getCardNumber() << endl;

	Card card3("고담덕");
	cout << "고객 이름: " << card3.getName() << endl;
	cout << "카드 번호: " << card3.getCardNumber() << endl;

	return 0;
}