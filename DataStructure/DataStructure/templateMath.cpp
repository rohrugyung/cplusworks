#include <iostream>
using namespace std;

/*
	template Ű���带 ����� ���ø� �Լ� ����
	��� �ڷ����� ����(���) ������
*/

class Math {
public:
	//T�� �Ϲ�(generic) �ڷ��� - ����� �� ������ �ڷ��� ���
	template<typename T> 
	static T myAbs(T x) {  //���밪 ��� �Լ�
		return (x < 0) ? -x : x;
	}
	template <typename T>
	static T min(T x, T y) {
		return (x < y) ? x : y;
	}

};

int main() {

	//Math Ŭ������ myAbs() ȣ��
	//������ �� ����
	cout << "���밪 : " << Math::myAbs(-8) << endl;    //8
	//�Ǽ��� �� ���� - Double Ÿ�� ����
	cout << "���밪 : " << Math::myAbs(-8.8) << endl;  //8.8

	//min() ȣ��
	cout << "�ּҰ�: " << Math::min(10, 20) << endl;  //10
	cout << "�ּҰ�: " << Math::min(10.1, 20.1) << endl;  //10

	return 0;
}