#include <iostream>
#include <string>  //compare()
using namespace std;

//ȸ�� �α��� ���� - �α���, �α׾ƿ�

class MemberService {
public:
	bool login(string id, string pwd);

	void logout();
};

bool MemberService::login(string id, string pwd) {
	//���̵�, ��й�ȣ ��ġ�ϸ� true ��ȯ
	if (id.compare("hangang") == 0 && pwd.compare("k2025") == 0) {
		return true;
	}

	return false;
}

void MemberService::logout() {
	cout << "�α׾ƿ� �Ǿ����ϴ�.\n";
}

int main() {
	
	MemberService service;

	string userId = "hangang";
	string password = "k2025";

	//�α��� �Լ� ȣ��
	bool result = service.login(userId, password);
	if (result) { //��ġ�ϸ�
		cout << "�α��εǾ����ϴ�\n";
		cout << userId << "�� ȯ���մϴ�.\n";
	}
	else {
		cout << "���̵� ��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n";
	}

	//�α׾ƿ� �Լ� ȣ��
	service.logout();

	return 0;
}
