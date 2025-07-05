#include <iostream>
#include <vector>
using namespace std;
/*
	�̸� : ���� ���� ������Ʈ
		   �Ա�, ���, ���� ����, �ŷ� ����

		   1. ����(BankAccount) Ŭ���� - ���¹�ȣ, ������, �ܰ�
		   2. �ŷ�(Transaction) ����ü - �ŷ� ����(�Ա�, ���), �ŷ� �ݾ�
*/
//�ŷ� ����
enum TransactionType {
	�Ա�, 
	���
};

struct Transaction {
	TransactionType type;  // �ŷ� ����(enum �ڷ��� ����)
	int amount;  // �ŷ� �ݾ�
};

class BankAccount {
private:
	int accountNumber;  // ���� ��ȣ
	string owner;       // ������
	int balance;        // �ܰ�
	vector<Transaction> transactions;  //�ŷ� ����

public:
	//������ �ʱ�ȭ ���
	BankAccount(int accountNumber, string owner, int balance = 0) : 
		accountNumber(accountNumber), owner(owner), balance(balance){ }

	void deposit(int amount);      //�Ա��ϴ�
	void withdraw(int amount);     //����ϴ�
	void displayInfo();            //���� ���� ����ϴ�
	void getTransactionHistory();  //�ŷ� ���� ��ȸ�ϴ�

private:  //Ŭ���� ���ο��� ����ϹǷ� public �� �ʿ䰡 ����.
	void addTransaction(TransactionType type, int amount);  //���: 100000
};

void BankAccount :: deposit(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance += amount;  //balance = balance + amount 
		cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ� : " << balance << "��\n";
		//�ŷ� �߻� �߰� - ����� ����ü(Ŭ����) �̸����� ���� ����
		addTransaction(TransactionType::�Ա�, amount);  //�Ա�, 10000
	}
	

}

void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else if (amount > balance) {
		cout << "���� �ܾ��� �����մϴ�.\n";
	}
	else{
		balance -= amount;  //balance = balance - amount 
		cout << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ� : " << balance << "��\n";
		//�ŷ� �߻� �߰� - ����� ����ü(Ŭ����) �̸����� ���� ����
		addTransaction(TransactionType::���, amount);  //���, 10000
	}
	
	
}

//�ŷ� �߰�
void BankAccount::addTransaction(TransactionType type, int amount) {
	//Transaction ��ü 1�� ����
	Transaction trans;
	trans.type = type;
	trans.amount = amount;
	//��ü�� ���Ϳ� ����
	transactions.push_back(trans);
}

//�ŷ� ���� ��ȸ
void BankAccount::getTransactionHistory() {
	cout << "�ŷ� ���� ��ȸ\n";
	if (transactions.empty()) {
		cout << "�ŷ������� �����ϴ�.\n";
		return;  //��� ����
	}

	//���� ��� for
	for (Transaction trans : transactions) {
		cout << " | " << (trans.type == TransactionType::�Ա� ? "�Ա�" : "���");
		cout << " | " << trans.amount << "��\n";
	}
}

//���� ����
void BankAccount::displayInfo() {
	cout << "���� ����\n";
	cout << "     ���� ��ȣ : " << accountNumber << endl;
	cout << "     ������ : " << owner << endl;
	cout << "     �ܰ� : " << balance << endl;
}

int main() {
	//���� ��ü ����(new ~ delete)
	/*BankAccount* account1 = new BankAccount(1001, "�̿���", 10000);
	BankAccount* account2 = new BankAccount(1002, "������", 30000);
	BankAccount* account3 = new BankAccount(1003, "�Ѱ�", 20000);

	//�迭�� ����	
	BankAccount* accounts[3] = {account1, account2, account3};
	
	//�Ա�
	accounts[0]->deposit(50000);
	accounts[1]->deposit(10000);

	//���
	accounts[1]->withdraw(130000);

	//���� ����
	for (int i = 0; i < size(accounts); i++) {
		accounts[i]->displayInfo();
		accounts[i]->getTransactionHistory();
	}
	
	for (int i = 0; i < size(accounts); i++) {
		delete accounts[i];  //�޸� ����
	}*/


	//���� ��ü ����
	vector<BankAccount> accounts;

	//���� �߰�
	accounts.push_back(BankAccount(1001, "�̿���", 10000));
	accounts.push_back(BankAccount(1002, "������", 30000));
	accounts.push_back(BankAccount(1003, "�Ѱ�", 20000));

	//�Ա�
	accounts[0].deposit(5000);
	accounts[1].deposit(10000);

	//���
	accounts[1].withdraw(20000);
	accounts[1].withdraw(50000);

	//�ε��� ��ȸ
	//for (int i = 0; i < accounts.size(); i++) {
	//	accounts[i].displayInfo();
	//	accounts[i].getTransactionHistory();
	//}
	
	//���� ��� for(�ڷ��� ����  : ����(�迭)�̸�){}
	for (BankAccount account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}

	return 0;
}