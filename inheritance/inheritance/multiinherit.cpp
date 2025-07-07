#include <iostream>
using namespace std;

//캐릭터 클래스 정의
class Character {
public:
	Character() {
		cout << "Character 클래스 생성자" << endl;
	}
	~Character() {
		cout << "Character 클래스 소멸자" << endl;
	}
}; 

//몬스터 클래스 정의
class Monster {
public:
	Monster() {
		cout << "Monster 클래스 생성자" << endl;
	}
	~Monster() {
		cout << "Monster 클래스 소멸자" << endl;
	}
}; 

//MonsterA 클래스 정의
class MonsterA : public Monster, Character {
private:
	int location[2];  //좌표 저장 배열

public:
	//기본 생성자 - 초기화 목록
	MonsterA() : MonsterA(0, 0) {  //생성자 호출
		cout << "MonsterA 클래스 생성자" << endl;
	}

	//매개변수 있는 생성자
	MonsterA(int x, int y) : location{ x, y } {
		/*location[0] = x;
		location[1] = y;*/
		cout << "MonsterA 클래스 생성자(매개변수 추가)" << endl;
	}

	//위치 출력 메서드
	void showLocation() {
		cout << "위치(" << location[0] << ", " << location[1] << ")\n";
	}
};

int main() {

	//기본생성자로 인스턴스 생성
	MonsterA forestMonster;
	forestMonster.showLocation();
	cout << "-------------------------\n";

	//매개변수 있는 생성자 인스턴스 생성
	MonsterA woodMonster(10, 20);
	woodMonster.showLocation();
	return 0;
}