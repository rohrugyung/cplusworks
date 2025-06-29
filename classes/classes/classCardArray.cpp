#include <iostream>
#include <string>
using namespace std;

//카드번호 자동 발급
class Card {
	static int serialNum;  //시리얼넘버 - 기존넘버, 정적변수
	string name;    //고객 이름
	int cardNumber; //카드 번호

public:
	/*Card(){
		serialNum++;
		cardNumber = serialNum;
	}*/ //기본 생성자 - main에 매개변수 없이 기본 생성자로 입력해놨으면, 기본생성자를 별도로 만들어야 한다!
	
	//생성자
	//Card(string name) {
	//	serialNum++;  // 1증가
	//	cardNumber = serialNum;
	//	this->name = name;
	//}

	//생성자 초기화 목록(기본생성자 포함)
	Card(string name = "") : name(name), cardNumber(++serialNum) {}

	//설정자
	void setName(string name) {  
		this->name = name;
	}

	//접근자
	string getName() { return name; }
	int getCardNumber() { return cardNumber; }

};

//전역 공간
int Card::serialNum = 1000;  //전역 변수

int main() {
	//객체 배열로 카드 발급
	const int SIZE = 3;
	Card cards[SIZE];  //기본 생성자 배열 생성

	/*Card cards[SIZE] = {
		Card("신유진"),  //매개변수가 있는 연산자
		Card("이정후"),
		Card("우상형")
	};*/

	for (int i = 0; i < SIZE; i++) {
		string name;
		cout << i + 1 << "번째 고객이름 입력 : ";
		//cin >> name;
		getline(cin, name);  //공백 문자 포함 출력 -> getline을 쓰기 위해서는 string을 include해야 함!
		cards[i].setName(name);
	}

	for (int i = 0; i < SIZE; i++) {
		cout << "고객이름 : " << cards[i].getName() << ", 카드번호 : " << cards[i].getCardNumber() << endl;
	}

	return 0;
}