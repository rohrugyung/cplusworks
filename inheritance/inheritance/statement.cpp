#include <iostream>
using namespace std;

class Drink {
protected:
	string name;  //상품명
	int price;    //가격
	int quantity;  //수량

public:
	Drink(string name, int price , int quantity) : 
		name(name), price(price), quantity(quantity){}

	//금액 = 가격 * 수량
	int calcPrice() {
		return price * quantity;
	}

	//제목(title) 행
	static void printTitle() {
		cout << "상품\t가격\t수량\t금액\n";
	}

	//데이터 출력
	void printData() {
		cout << name <<"\t" << price << "\t" <<
			quantity << "\t" << calcPrice() << endl;
 
	}
};

//Drink를 상속한 Alcohol 클래스 정의
class Alcohol : public Drink {
private:
	float alcper; //알콜 도수

public:
	Alcohol(string name, int price, int quantity, float alcper) :
		Drink(name, price, quantity), alcper(alcper){}  //부모 생성사 상속

	//함수 오버라이팅
	static void printTitle() {
		cout << "상품명(도수[%])\t가격\t수량\t금액\n";
	}

	void printData() {
		cout << name << "(" << alcper << ")\t" << price << "\t" <<
			quantity << "\t" << calcPrice() << endl;
	}
};

int main() {

	Drink coffee("커피", 2500, 4);
	Drink tea("녹차", 3000, 3);

	cout << "======= 매출 전표 =======\n";
	//Drink::printTitle();  //제목행
	//coffee.printData();
	//tea.printData();

	//배열로 관리
	Drink drinks[2] = { coffee, tea };
	int total_drink = 0;

	Drink::printTitle();
	for (Drink drink : drinks) {
		drink.printData();
		total_drink += drink.calcPrice();
	}

	cout << "*** 음료 합계금액: " << total_drink << "원 ***\n\n" << endl;
	cout << endl;

	//주류 인스턴스 생성
	Alcohol soju("소주", 4000, 2, 15.1f);
	Alcohol beer("맥주", 2500, 3, 5.4f);

	//배열로 관리
	Alcohol alcohols[2] = { soju, beer };
	int total_alcohol = 0;

	Alcohol::printTitle();
	for (Alcohol alcohol : alcohols) {
		alcohol.printData();
		total_alcohol += alcohol.calcPrice();
	}

	cout << "*** 주류 합계금액: " << total_alcohol << "원 ***" << endl;

	int sum = total_drink + total_alcohol;

	cout << "*** 총 합계금액: " << sum << "원 ***" << endl;

	return 0;
}