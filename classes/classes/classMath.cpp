#include <iostream>
using namespace std;

//���� ��� �Լ� - ���¸� �������� �ʴ� ���� ����

class Math {
public:
	//���밪 ���� �Լ�
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}

	//�� ���� �ִ밪 ��� �Լ�
	static int max(int a, int b) {
		return (a > b) ? a : b;
	}

	//�� ���� �ּҰ� ��� �Լ�
	static int min(int a, int b) {
		return (a < b) ? a : b;
	}
};

int main() {

	//Math �ν��Ͻ� ����
	//Math math;
	//cout << math.abs(-5) << endl;

	//���� ��� �Լ� ȣ�� ��� - Ŭ���� �̸����� ���� ����
	cout << "���밪: " << Math::abs(-5) << endl;
	cout << "�� �� �� ū ��: " << Math::max(10, 20) << endl;
	cout << "�� �� �� ���� ��: " << Math::min(10, 20) << endl;

	return 0;
}