#include <iostream>
using namespace std;

int main() {
	//숫자 비교 - 동등 연산자 사용
	int n1 = 10;
	int n2 = 10;

	if (n1 == n2) {
		cout << "두수는 같습니다.\n";

	}
	else {  // n1 != n2
		cout << "두수는 같지 않습니다.\n";
	}

	//문자 비교
	string str1 = "사과";
	string str2 = "귤";

	cout << str1.compare("사과") << endl;  //0
	cout << str1.compare("바나나") << endl;  //1

	if (str1.compare(str2) == 0) {
		cout << "두 문자열이 일치합니다.\n";
	}
	else {
		cout << "두 문자열이 일치하지 않습니다.\n";
	}

	return 0;
}