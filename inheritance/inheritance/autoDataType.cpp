#include <iostream>
#include <vector>
using namespace std;
/*
	auto �ڷ����� ������ Ÿ���� �ڵ� �߷��� �� �ִ�.
*/
//int square(int x) {
//	return x * x;
//}

//�ζ��� �Լ�(�� �ٿ� ����� �Լ�, �����ÿ��� ����) 
// - ȣ���� �߻����� �ʰ�, �Լ� ������ �����ؼ� ���� 
int square(int x) {return x * x;}

int main() {
	auto ch = 'k';
	auto num = 12;
	auto unit = 2.54;
	auto* ip = &num;

	cout << ch << ", " << num << ", " << 
		unit << ", " << *ip << endl;

	//�Լ��� ���� Ÿ��
	auto value = square(9);
	cout << value << endl;

	//���� �ڷᱸ��
	vector<int> vec = { 1, 2, 3, 4 };

	//���� ��� for��
	for (auto& v : vec)
		cout << v << " ";

	return 0;
}