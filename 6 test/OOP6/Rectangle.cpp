#include "Rectangle.h"

int Rectangle::counter = 0;
Rectangle::Rectangle()
{
	Pair man;
	this->man = man;
	Rectangle::counter++;
}

Rectangle::Rectangle(Pair man, int square)
{
	this->man = man;
	this->square = square;
	Rectangle::counter++;
}

Rectangle::Rectangle( int x,  int y, int square)
{
	Pair man( x, y);
	this->man = man;
	this->square = square;
	Rectangle::counter++;
}

Rectangle::~Rectangle()
{
	Rectangle::counter--;
}

Rectangle::Pair Rectangle::getPair()
{
	return this->man;
}

int Rectangle::getsquare()
{
	return this->square;
}

void Rectangle::squareIncrease()
{
	this->square++;
}



Rectangle& Rectangle::operator=(Rectangle& student)
{
	this->man = student.man;
	this->square = student.square;
	return *this;
}

int Rectangle::getCounter()
{
	return Rectangle::counter;
}

void Rectangle::setsquare(int square)
{
	this->square = square;
}

void Rectangle::setPair(Pair man)
{
	this->man = man;
}

ostream& operator<<(ostream& out, Rectangle& Rectangle)

{
	Rectangle.perimeter = Rectangle.perimeter1();
	Rectangle.square = Rectangle.square1();
	out << Rectangle.man << "square: " << Rectangle.square << "\n";
	out << Rectangle.man << "perimeter: " << Rectangle.perimeter << "\n";
	return out;
}

istream& operator>>(istream& in, Rectangle& student)
{
	in >> student.man;
	
	cout << endl;
	return in;
}


int Rectangle::square1() {
	return  (man.getx() * man.gety());
}
int Rectangle::perimeter1() {
	return  (man.getx() + man.gety()) * 2;
}







int Rectangle::Pair::counter = 0;
Rectangle::Pair::Pair(int x, int y)
{
	
	this->x = x;
	this->y = y;
	Rectangle::Pair::counter++;
}

Rectangle::Pair::Pair()
{
	this->x = 0;
	this->y = 0;
	Rectangle::Pair::counter++;
}



Rectangle::Pair::~Pair()
{
	Rectangle::Pair::counter--;
}

void Rectangle::Pair::setx(int x)
{
	this->x = x;
}

void Rectangle::Pair::sety(double)
{
	this->y = y;
}



int Rectangle::Pair::getx()
{
	return this->x;
}



double Rectangle::Pair::gety()
{
	return this->y;
}

int Rectangle::Pair::getCounter()
{
	return  Rectangle::Pair::counter;
}

Rectangle::Pair& Rectangle::Pair::operator=(Pair& man)
{
	
	this->x = man.x;
	this->y = man.y;
	return *this;
}


ostream& operator<<(ostream& out, Rectangle::Pair& man)
{
	out << string(
		+ "\nx: " + to_string(man.x)
		+ "\ny: " + to_string(man.y) + "\n");
	return out;
}

istream& operator>>(istream& in, Rectangle::Pair& man)
{
	
	cout << "x: "; in >> man.x;
	cout << "y: "; in >> man.y;
	return in;
}

