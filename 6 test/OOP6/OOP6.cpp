#include <iostream>
#include"Rectangle.h"
using namespace std;
int main()
{
	Rectangle st1(9,5,45 );
	cout << st1 << endl;
	cin >> st1;
	cout << st1 << endl;
	
	Rectangle::Pair man1(20,  105);
	st1.setPair(man1);
}


