#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct account
{
private:
	int account_number, balance;
	string name;
public:
	void set_balance(int balance) {
		this->balance = balance;
	}
	void set_number(int number) {
		this->account_number = number;
	}
	void set_name(string name) {
		this->name = name;
	}
	string get_name() {
		return name;
	}
	int get_number() {
		return account_number;
	}
	int get_balance() {
		return balance;
	}
};

int main() {
	SetConsoleOutputCP(1251); 
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	account f;
	cout << "������� ����� �����: ";
	int x;
	cin >> x;
	f.set_number(x);
	cout << "������� ��� ���������: ";
	string y;
	cin >> y;
	f.set_name(y);

	cout << "������� ������: ";
	cin >> x;
	f.set_balance(x);
	cout << "������� ����� ������: ";
	cin >> x;
	f.set_balance(x);
	cout << "��� ����: " << f.get_name() << ", " << f.get_number() << ", " << f.get_balance();

	
}