#include <iostream>
#include <vector>
using namespace std;

int main() {

	//�������� ���ڸ� ������ ���� ����
	vector<string> list;
	string name;  //�̸�

	//��� �߰�
	list.push_back("jerry");
	list.push_back("luna");
	list.push_back("han");
	list.push_back("elsa");

	//2�� �˻�
	cout << list[2] << endl;

	//��ü ��ȸ
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
	cout << endl;

	//�������� ���� �ڿ� ������ �̸�(�ڵ尪�� �ִ밪�� ���ϴ� ����)
	//a(97) b(98).....  �ƽ�Ű �ڵ尪 ��� ��
	name = list[0];  //�ִ밪 ����
	for (int i = 0; i < list.size(); i++) {
		if (list[i] > name)
			name = list[i];
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;

	return 0;
}