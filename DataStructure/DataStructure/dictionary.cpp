#include <iostream>
#include <string>  //getline() 사용
#include <map>
using namespace std;

int main() {

	//컴퓨터 용어 사전
	map<string, string> dict;
	string word;  //단어 저장 변수

	//단어 저장
	dict.insert({ "이진수", "컴퓨터가 사용하는 0과 1로 이루어진 수" });
	dict.insert({ "비트", "정보 기술에서 데이터의 가장 작은 단위로, 0 또는 1의 값을 가진다." });
	dict.insert({ "컴파일", "프로그래밍 언어로 작성된 소스 코드를 컴퓨터가 이해하고, 실행할 수 있는 기계어로"
		"\n변화하는 과정을 말한다." });

	//특정 단어 검색
	//cout << dict["비트"] << endl;

	//auto it = dict.find("비트");

	//cout << it->first << ": " << it->second << endl;

	//사전 제작
	while (true) {
		cout << "검색할 단어를 입력하세요(종료 - exit 입력): ";
		/*cin >> word;*/
		getline(cin, word);  //공백을 포함한 문자열

		if (word == "exit") {
			break;  //반복 종료
		}
		else if (dict.find(word) == dict.end()) {
			cout << "찾는 단어가 없습니다.\n";
		}
		else {
			cout << dict[word] << endl;
		}
	}
	cout << "검색을 종료합니다.\n";

	return 0;
}