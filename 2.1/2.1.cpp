//1.1.cpp
#include <iostream>
#include "Cursor.h"
using namespace std;

Cursor makeCursor(int x, int y) {
	Cursor c(x, y);
	return c;
}
int main() {
	
	Cursor c1(100, 200);
	Cursor c2(300, 400);
	cout << c1++ << endl;
	cout << c1 << endl;
	cout << c2-- << endl;
	cout << c2 << endl;
	Cursor c;
	c.Read();
	c.ChangeX(500);
	c.ChangeY(200);
	c.Display();
	int x, y;
	cout << "Input location of cursor:" << endl << endl;
	cout << " x = "; cin >> x;
	cout << " y = "; cin >> y;
	c = makeCursor(x, y);
	c.Display();

	return 0;
}