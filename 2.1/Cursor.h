// Cursor.h
# pragma once
# include <iostream>


using namespace std;

class Cursor {
private:
	int first;
	int second;
public:
	Cursor();
	Cursor (int x, int y);
	Cursor(const Cursor& other);

	int getFirst();
	int getSecond();

	void ChangeX(int x);
	void ChangeY(int y);

	void Read();
	void Display() const;
	

	Cursor& operator=(const Cursor& other);
	operator string() const;

	Cursor& operator++();
	Cursor& operator--(); 

	Cursor operator++(int);
	Cursor operator--(int); 

	friend ostream& operator<<(ostream&, const Cursor&); 
	friend istream& operator>>(istream&, Cursor&);
};
