// Cursor.cpp
# include "Cursor.h"
#include <string>
Cursor::Cursor() : first(0), second(0) {}

Cursor::Cursor(const Cursor& other) : first(other.first), second(other.second) {}

int Cursor::getFirst() {
	return first;
}
int Cursor::getSecond() {
	return second;
}
void Cursor::ChangeX(int x) {
	if (x >= 0 && x <= 1920) {
		first = x;
	}
}
void Cursor::ChangeY(int y) {
	if (y >= 0 && y <= 1080) {
		second = y;
	}
}
Cursor::Cursor(int x, int y) {
	if (x >= 0 && x <= 1920 && y >= 0 && y <= 1080) {
		first = x;
		second = y;
	}
	else {
		cout << "Error" << endl;
	}
}
void Cursor::Read() {
	int x, y;
	do
	{
		cout << "Input location of cursor:" << endl;
		cout << " x = "; cin >> x;
		cout << " y = "; cin >> y;
	} while (x < 0 || x > 1920 || y < 0 || y > 1080);
	first = x;
	second = y;
}
void Cursor::Display() const {
	cout << endl;
	cout << " x = " << first << endl;
	cout << " y = " << second << endl;

}
Cursor::operator string() const {
	return "x = " + to_string(first) + ", y = " + to_string(second);
}
Cursor& Cursor::operator=(const Cursor& other) {
	if (this != &other) {
		first = other.first;
		second = other.second;
	}
	return *this;
}
Cursor& Cursor::operator++() {
	first++;
	return *this;
} 

Cursor& Cursor::operator--() {
	first--;
	return *this;
}
Cursor Cursor::operator++(int) {
	Cursor t(*this);
	second++;
	return t;
}
Cursor Cursor::operator--(int) {
	Cursor t(*this);
	second--;
	return t;

}
ostream& operator<<(ostream& out, const Cursor& cursor) {
	out << " x = " << cursor.first << endl;
	out << " y = " << cursor.second << endl;
	return out;
}
istream& operator>>(istream& in, Cursor& cursor) {
	int x, y;
	do {
		cout << "Input location of cursor:" << endl;
		cout << " x = "; in >> x;
		cout << " y = "; in >> y;
	} while (x < 0 || x > 1920 || y < 0 || y > 1080);
	cursor.first = x;
	cursor.second = y;
	return in;
}