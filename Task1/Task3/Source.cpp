#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct adress
{
private:
	string country, city, street;
	int number_house, number_appartment, index;
public:
	void set_country(string country) {
		this->country = country;
	}
	void set_city(string city) {
		this->city = city;
	}
	void set_street(string street) {
		this->street = street;
	}
	void set_house(int x) {
		number_house = x;
	}
	void set_appartment(int x) {
		number_appartment = x;
	}
	void set_index(int x) {
		index = x;
	}
	string get_country() {return country;}
	string get_city() {return city;}
	string get_street() {return street;}
	int get_house() { return number_house; };
	int get_apparment() { return number_appartment; };
	int get_index() { return index; }
};

void fun(adress x) {
	cout << "Страна: " << x.get_country() << "\n";
	cout << "Город: " << x.get_city() << "\n";
	cout << "Улица: " << x.get_street() << "\n";
	cout << "Номер дома : " << x.get_house() << "\n";
	cout << "Номер квартиры : " << x.get_apparment() << "\n";
	cout << "Индекс : " << x.get_index() << "\n";
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	string s;
	adress g;
	cout << "Введите страну: "; cin >> s; g.set_country(s);
	cout << "Введите город: "; cin >> s; g.set_city(s);
	cout << "Введите улицу: "; cin >> s; g.set_street(s);
	int x;
	cout << "Введите номер дома: "; cin >> x; g.set_house(x);
	cout << "Введите номер квартиры: "; cin >> x; g.set_appartment(x);
	cout << "Введите индекс: "; cin >> x; g.set_index(x);
	fun(g);

}