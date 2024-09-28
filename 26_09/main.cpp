#include <iostream>
#include "problem.h"

using std::cout;
using std::endl;


int main() {
	B* b = new B(10);
	cout << endl;
	C* c = new C(20);
	cout << endl;
	D* d = new D(15);

	// d->print()			"D::print" is ambiguous

	cout << endl;
	d->C::print();
	d->B::print();
	cout << endl;


	delete b;
	cout << endl;
	delete c;
	cout << endl;
	delete d;

	return 0;
}