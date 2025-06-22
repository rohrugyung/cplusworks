#include <iostream>
using namespace std;

/*
	학생의 성적 관리

*/

int main() {
	int studentNum;  //학생수
	int* score = nullptr;   //점수
	int choice;  //메뉴 선택
	bool run = true;  //상태 - 실행(true) / 종료(false)

	while (run) {
		cout << "--------------------------------------------------------\n";
		cout << "1. 학생수 | 2. 점수입력 | 3. 점수리스트 | 4. 분석 | 5. 종료\n";
		cout << "--------------------------------------------------------\n";
		cout << "선택 > ";
		cin >> choice;

		int total;  //총점
		float average;  //평균
		int max;  //최고점수

		switch (choice) {
		case 1: 
			cout << "학생수" << endl;
			cin >> studentNum;
			score = new int[studentNum];  //동적 할당
			break;
		case 2:
			for (int i = 0; i < studentNum; i++) {
				cout << "score[" << i << "]=";
				cin >> score[i];
			}
			break;
		case 3:
			for (int i= 0; i < studentNum; i++) {
				cout << "score[" << i << "]=" << score[i] << endl;
			}
			break;

		case 4:
			//평균점수, 최고점수
			if (score == nullptr || studentNum <= 0) {
				cout << "먼저 학생 수와 점수를 입력하세요.\n";
				break;
			}
			total = 0;
			max = score[0];
			for (int i = 0; i < studentNum; i++) {
				total += score[i];
				if (score[i] > max)
					max = score[i];
			}
			average = (float)total / studentNum;

			cout << fixed;
			cout.precision(1);  //소수 첫째자리까지 설정
			cout << "평균 점수: " << average << endl;
			cout << "최고 점수: " << max << endl;
			break;

		case 5:
			cout << "프로그램 종료\n" << endl;
			run = false;
			break;
		default:
			cout << "잘못된 선택입니다. 다시 입력하세요\n" << endl;
			break;
		}
		
	}

	delete[] score;

	return 0;
}