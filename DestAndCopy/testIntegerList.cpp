#include "IntegerList.h"
#include <iostream>
using namespace std;

void display(IntegerList &b)
{
	for (int i = 0; i < b.getNumElements(); i++)
		cout << b.getElement(i) << endl;
}

int main()
{
	const int SIZE = 5;
	IntegerList a(SIZE);

	// just put some numbers in to test it
	for (int i = 0; i < SIZE; i++)
		a.setElement(i, i * 2);

	cout << "A's values:" << endl;
	display(a);

	IntegerList b(SIZE);

	b = a;

	cout << "B's values:" << endl;

	display(b);

}