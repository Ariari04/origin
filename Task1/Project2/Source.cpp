#include <iostream>
using namespace std;

enum class month {
	January=1,
	February,
	March,
	April,
	May,
	June,
	Jule,
	August,
	September,
	October,
	November,
	December
};


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	while (1) {
		cout << "������� ����� ������: ";
		cin >> n;
		if (n == 0) {
			break;
		}
		if (n > 12 || n < 0) {
			cout << "������������ �����!\n";
			continue;
		}

		month mon = static_cast <month>(n);
		switch (mon) {
		case month::January:
			cout << "������";
			break;
		case month::February:
			cout << "�������";
			break;
		case month::March:
			cout << "����";
			break;
		case month::April:
			cout << "������";
			break;
		case month::May:
			cout << "���";
			break;
		case month::June:
			cout << "����";
			break;
		case month::Jule:
			cout << "����";
			break;
		case month::August:
			cout << "������";
			break;
		case month::September:
			cout << "��������";
			break;
		case month::October:
			cout << "�������";
			break;
		case month::November:
			cout << "������";
			break;
		case month::December:
			cout << "�������";
			break;
		}
		cout << "\n";
	}
	cout << "�� ��������!";
}