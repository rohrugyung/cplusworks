#include <iostream>
#include <vector>

using namespace std;

class Book {
private:
	int number;     //å��ȣ
	string title;   //å����
	string author;  //����

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
	cout << "å��ȣ: " << this->number << endl;
	cout << "å����: " << this->title << endl;
	cout << "å����: " << this->author << endl;
	cout << "-----------------------------\n";
}

int main() {

	//Book �ν��Ͻ��� ������ vector ����
	vector<Book> books;

	//���� ����
	books.push_back(Book(100, "ä��������", "�Ѱ�"));
	books.push_back(Book(101, "C++ ��������", "���Գ�"));
	books.push_back(Book(102, "����� C���", "������"));

	//ù��° ��� ���� ���
	//books[0].showBookInfo();
	//books.at(0).showBookInfo();  //ù° ���

	//��ü ��ȸ
	//vector<Book>::iterator it = books.begin();
	//it->showBookInfo();  //ù° ���

	//auto it = books.begin() + 1;  //�ι�° ���
	//it->showBookInfo();
	
	cout << "********** å�� ���� **********\n";
	for (auto it = books.begin(); it != books.end(); it++) {
		it->showBookInfo();
	}

	//2�� ��� ����
	books.erase(books.begin() + 2);

	cout << "********** ���� �� å�� ���� **********\n";

	//���� ��� for��
	for (auto book : books) {
		book.showBookInfo();
	}
	 
	return 0;
}