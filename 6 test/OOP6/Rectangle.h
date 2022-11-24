#pragma once
#include<iostream>
#include<string>
using namespace std;

class Rectangle
{
public:
	class Pair
	{
	private:
		int x;
		int y;
		static int counter;
	public:
		Pair(int, int);
		Pair();
		~Pair();
		
		void setx(int);
		void sety(double);

		
		int getx();
		double gety();
		Pair& operator =(Pair&);
		friend ostream& operator << (ostream&, Rectangle::Pair&);
		friend istream& operator >> (istream&, Rectangle::Pair&);

		static int getCounter();
	};

	Rectangle();
	Rectangle(Pair, int);
	Rectangle( int, int, int);
	~Rectangle();

	Pair getPair();
	int getsquare();

	void setsquare(int);
	void setPair(Pair);

	void squareIncrease();
	Rectangle& operator =(Rectangle&);
	friend ostream& operator << (ostream&, Rectangle&);
	friend istream& operator >> (istream&, Rectangle&);
	static int getCounter();
	int square1();
	int perimeter1();

private:
	Pair man;
	int square;
	int perimeter;
	static int counter;
};

