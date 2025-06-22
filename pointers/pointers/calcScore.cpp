#include <iostream>
using namespace std;

/*
	�л��� ���� ����

*/

int main() {
	int studentNum;  //�л���
	int* score = nullptr;   //����
	int choice;  //�޴� ����
	bool run = true;  //���� - ����(true) / ����(false)

	while (run) {
		cout << "--------------------------------------------------------\n";
		cout << "1. �л��� | 2. �����Է� | 3. ��������Ʈ | 4. �м� | 5. ����\n";
		cout << "--------------------------------------------------------\n";
		cout << "���� > ";
		cin >> choice;

		int total;  //����
		float average;  //���
		int max;  //�ְ�����

		switch (choice) {
		case 1: 
			cout << "�л���" << endl;
			cin >> studentNum;
			score = new int[studentNum];  //���� �Ҵ�
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
			//�������, �ְ�����
			if (score == nullptr || studentNum <= 0) {
				cout << "���� �л� ���� ������ �Է��ϼ���.\n";
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
			cout.precision(1);  //�Ҽ� ù°�ڸ����� ����
			cout << "��� ����: " << average << endl;
			cout << "�ְ� ����: " << max << endl;
			break;

		case 5:
			cout << "���α׷� ����\n" << endl;
			run = false;
			break;
		default:
			cout << "�߸��� �����Դϴ�. �ٽ� �Է��ϼ���\n" << endl;
			break;
		}
		
	}

	delete[] score;

	return 0;
}