#include <iostream>
#include <map>  //map - STL �߰�
using namespace std;

int main() {

	map<string, int> dogs;  //Ű�� ���� ���� map ����

	//��� �߰� - ������ ����
	dogs.insert({ "��Ƽ��", 3 });
	dogs.insert({ "������", 2 });
	dogs.insert({ "�ҵ�", 4 });

	cout << dogs.size() << endl;

	//Ư�� ��� �˻� - key�� �˻��ϸ� ���� Ȯ��
	cout << dogs["������"] << endl;  //2
	cout << dogs.at("������") << endl;  //2

	//��ü �˻� - �ݺ���, first(Ű), second(��)
	for (auto it = dogs.begin(); it != dogs.end(); it++) {
		cout << it->first << ", " << it->second << endl;
	}

	cout << "------------------------\n";

	//��� ����
	dogs.erase("�ҵ�");

	for (auto dog : dogs)
		cout << dog.first << ", " << dog.second << endl;

	return 0;
}