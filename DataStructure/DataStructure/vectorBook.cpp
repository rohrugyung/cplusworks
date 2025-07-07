#include <iostream>
#include <vector>

using namespace std;

class Book {
private:
	int number;     //책번호
	string title;   //책제목
	string author;  //저자

public:
	Book(int number, string title, string author);

	void showBookInfo();
};

Book::Book(int number, string title, string author) {
	this->number = number;
	this->title = title;
	this->author = author;
}

void Book::showBookInfo() {
	cout << "책번호: " << this->number << endl;
	cout << "책제목: " << this->title << endl;
	cout << "책저자: " << this->author << endl;
	cout << "-----------------------------\n";
}

int main() {

	//Book 인스턴스를 저장할 vector 생성
	vector<Book> books;

	//도서 생성
	books.push_back(Book(100, "채식주의자", "한강"));
	books.push_back(Book(101, "C++ 완전정복", "조규남"));
	books.push_back(Book(102, "모두의 C언어", "이형우"));

	//첫번째 요소 정보 출력
	//books[0].showBookInfo();
	//books.at(0).showBookInfo();  //첫째 요소

	//전체 조회
	//vector<Book>::iterator it = books.begin();
	//it->showBookInfo();  //첫째 요소

	//auto it = books.begin() + 1;  //두번째 요소
	//it->showBookInfo();
	
	cout << "********** 책의 정보 **********\n";
	for (auto it = books.begin(); it != books.end(); it++) {
		it->showBookInfo();
	}

	//2번 요소 삭제
	books.erase(books.begin() + 2);

	cout << "********** 삭제 후 책의 정보 **********\n";

	//범위 기반 for문
	for (auto book : books) {
		book.showBookInfo();
	}
	 
	return 0;
}