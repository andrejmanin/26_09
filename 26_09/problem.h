#ifndef PROBLEM_H
#define PROBLEM_H

#include <iostream>

class A {
protected:
	int a;
public:
	A() {
		std::cout << "Constructor class A" << std::endl;
	}
	
	~A() {
		std::cout << "Destructor class A" << std::endl;
	}

	virtual void print() = 0;
};

class C : protected A {
public:
	C(int a) {
		this->a = a;
		std::cout << "Constructor class C" << std::endl;
	}
	~C() {
		std::cout << "Destructor class C" << std::endl;
	}
	void print() override {
		std::cout << "Print class C" << std::endl;
		std::cout << "Class C: " << a << std::endl;
	}
};

class B : protected A {
public:
	B(int a) {
		this->a = a;
		std::cout << "Constructor class B" << std::endl;
	}
	~B() {
		std::cout << "Destructor class B" << std::endl;
	}
	void print() override {
		std::cout << "Print class B" << std::endl;
		std::cout << "Class B: " << a << std::endl;
	}
};


class D : public B, public C {
public:
	D(int a) : B(a), C(a) {
		std::cout << "Constructor class D" << std::endl;
	}
	~D() {
		std::cout << "Destructor class D" << std::endl;
	}
};

#endif // PROBLEM_H
