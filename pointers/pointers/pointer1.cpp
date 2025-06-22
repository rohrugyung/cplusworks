#include <iostream>
using namespace std;

int main() {
	
	//정적 포인터 변수
	//int n = 3;
	//int* p;

	//p = &n;
	//cout << n << endl;  //3
	//cout << *p << endl; //3
	//cout << *p + 10 << endl; //13

	//동적 포인터 변수 - new 키워드 사용
	int* ptr;
	//ptr = new int;
	//if (ptr == nullptr) {  //c언어에서는 NULL을 사용하나, C++에서는 nullptr을 사용한다!
	//	cout << "메모리를 할당할 수 없습니다.\n";
	//	return 0;
	//}

	//*ptr = 5;
	//cout << *ptr << endl;  //5
	//cout << *ptr + 5 << endl;  //10
	//
	//delete ptr;  //메모리 해제
	
	//정수형 배열 동적 할당
	int* pa;
	pa = new int[10];

	pa[0] = 1;
	pa[1] = 2;
	pa[2] = 3;

	cout << pa[0] << ", " << pa[1] << ", " << pa[2] << endl;

	//*pa = 1;  //*(pa + 0)
	//*(pa + 1) = 2;
	//*(pa + 2) = 3;

	//cout << *pa << ", " << *(pa + 1) << ", " << *(pa + 2) << endl;


	//1부터 10까지 저장
	for (int i = 0; i < 10; i++) {
		pa[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << *(pa + i) << " ";
		/*cout << pa[i] << " ";*/
	}
	delete[] pa;  //메모리 해제(반납)

	return 0;
}