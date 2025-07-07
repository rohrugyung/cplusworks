#include <iostream>
#include <string>  //getline() ���
#include <map>
using namespace std;

int main() {

	//��ǻ�� ��� ����
	map<string, string> dict;
	string word;  //�ܾ� ���� ����

	//�ܾ� ����
	dict.insert({ "������", "��ǻ�Ͱ� ����ϴ� 0�� 1�� �̷���� ��" });
	dict.insert({ "��Ʈ", "���� ������� �������� ���� ���� ������, 0 �Ǵ� 1�� ���� ������." });
	dict.insert({ "������", "���α׷��� ���� �ۼ��� �ҽ� �ڵ带 ��ǻ�Ͱ� �����ϰ�, ������ �� �ִ� �����"
		"\n��ȭ�ϴ� ������ ���Ѵ�." });

	//Ư�� �ܾ� �˻�
	//cout << dict["��Ʈ"] << endl;

	//auto it = dict.find("��Ʈ");

	//cout << it->first << ": " << it->second << endl;

	//���� ����
	while (true) {
		cout << "�˻��� �ܾ �Է��ϼ���(���� - exit �Է�): ";
		/*cin >> word;*/
		getline(cin, word);  //������ ������ ���ڿ�

		if (word == "exit") {
			break;  //�ݺ� ����
		}
		else if (dict.find(word) == dict.end()) {
			cout << "ã�� �ܾ �����ϴ�.\n";
		}
		else {
			cout << dict[word] << endl;
		}
	}
	cout << "�˻��� �����մϴ�.\n";

	return 0;
}