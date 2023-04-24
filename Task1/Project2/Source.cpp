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
		cout << "Введите номер месяца: ";
		cin >> n;
		if (n == 0) {
			break;
		}
		if (n > 12 || n < 0) {
			cout << "Неправильный номер!\n";
			continue;
		}

		month mon = static_cast <month>(n);
		switch (mon) {
		case month::January:
			cout << "Январь";
			break;
		case month::February:
			cout << "Февраль";
			break;
		case month::March:
			cout << "Март";
			break;
		case month::April:
			cout << "Апрель";
			break;
		case month::May:
			cout << "Май";
			break;
		case month::June:
			cout << "Июнь";
			break;
		case month::Jule:
			cout << "Июль";
			break;
		case month::August:
			cout << "Август";
			break;
		case month::September:
			cout << "Сентябрь";
			break;
		case month::October:
			cout << "Октябрь";
			break;
		case month::November:
			cout << "Ноябрь";
			break;
		case month::December:
			cout << "Декабрь";
			break;
		}
		cout << "\n";
	}
	cout << "До свидания!";
}