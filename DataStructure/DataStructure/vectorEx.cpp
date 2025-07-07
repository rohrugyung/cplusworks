#include <iostream>
#include <vector>  //vector ���̺귯�� �߰�

using namespace std;

int main() {

	//������ ���� ����
	vector<int> vec;

	//��� �߰�
	/*vec.push_back(80);
	vec.push_back(75);
	vec.push_back(90);*/

	vec = { 80, 75, 90 };  //������ �Բ� �ʱ�ȭ

	//Ư�� ��� �˻�
	cout << "ù ��° " << vec.front() << endl; //80
	cout << "������ " << vec.back() << endl; //90
	cout << vec.at(1) << endl; //75
	cout << vec[1] << endl; //75

	//����� ����
	cout << vec.size() << endl;  //3

	//��ü �˻�
	//for (int i = 0; i < vec.size(); i++) {
	//	cout << vec[i] << endl;
	//}

	//�ݺ��� �˻� - iterator
	vector<int>::iterator it = vec.begin();

	//Ư�� ��� �˻�
	cout << *it << endl;  //80
	cout << *(it + 1) << endl;  //75
	cout << *(it + 2) << endl;  //90

	//�ݺ��ڷ� ��ȸ
	cout << *vec.begin() << endl;  //80, ù° �ڸ�
	cout << *(vec.begin()+1) << endl;  //75
	cout << *(vec.end() - 1) << endl;  //90, vec.end() - ã�� ������ �� ���
	
	cout << "================================\n";

	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}

	cout << "================================\n";

	//��� ����
	/*vec[1] = 100;*/
	vec.at(1) = 100;

	//��� ����
	//vec.pop_back();  //�� �� ��� ����
	

	//Ư�� ��� ����
	for (it = vec.begin(); it != vec.end(); it++) {
		if (*it == 90) {
			vec.erase(it);
			break;  //�ݺ� ���� -> erase�� ���� �ȵǰ� break���� ���� ��� �Ѵ�.
		}
	}

	for (auto v : vec)
		cout << v << " ";

	return 0;
}