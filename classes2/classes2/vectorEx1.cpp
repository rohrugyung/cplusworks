#include <iostream>
#include <vector>
using namespace std;

int main() {

	//������ ���� �ڷᱸ��
	//���ʹ� ������ ����(�ε��� 0�� ����)
	vector<int> vec;

	//��� �߰�
	vec.push_back(10);  //0�� �ε���
	vec.push_back(20);
	vec.push_back(30);

	//��� �˻� - �ε��� ���ȣ([]) ���
	cout << vec[0] << endl;  //10

	//������ ũ��
	cout << "������ ũ��: " << vec.size() << endl;

	//��� ����
	/*vec[1] = 50;*/
	vec.at(1) = 50;

	//��ü ��ȸ
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}

	return 0;
}