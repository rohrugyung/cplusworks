#include <iostream>
#include <string>

using namespace std;

int main() {
	//�л��� ����
	int number;  //�й� 
	string name;  //�̸�
	int eng, math;  //��������, ��������
	float avg;  //���

	cout << "�й� �Է�: ";
	cin >> number;

	cout << "�̸� �Է�: ";
	//cin >> name;
	//ignore() - '\n' �ڵ� �ٹٲ� ���� �ʵ��� �ϴ� �Լ�
	cin.ignore();
	getline(cin, name);

	cout << "�������� �Է�: ";
	cin >> eng;

	cout << "�������� �Է�: ";
	cin >> math;

	//��� ���
	avg = (float)(eng + math) / 2;  //����� ����ȯ

	cout << "\n===== �л��� ���� ��� =====\n";
	cout << "�й�: " << number << endl;
	cout << "�̸�: " << name << endl;
	cout << "��������: " << eng << endl;
	cout << "��������: " << math << endl;
	cout << "�������: " << avg << endl;

	return 0;
}