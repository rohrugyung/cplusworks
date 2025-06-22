#include <iostream>
using namespace std;


class Member {
	string id;
	string password;

public:
	Member(string id, string password);
	void showInfo();
};

Member::Member(string id, string password) {
	this->id = id;
	this->password = password;
}

void Member::showInfo() {
	cout << "아이디 : " << this->id << ", 패스워드 : " << this->password << endl;
}
	

int main() {

	Member members[3] = {
		Member("flower", "f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234"),

	};

	cout << "******** 회원 현황 ******" << endl;

	for (int i = 0; i < size(members); i++) {
		members[i].showInfo();
	}

	return 0;
}