#include <iostream>

using namespace std;

class Parent {
public:
	Parent() {

	}
	Parent(const Parent& other) {
		cout << "copy constructor running" << endl;

	}

	virtual void print() {
		cout << "parent" << endl;
	}

	virtual ~Parent() {

	}
};

class Child : public Parent {
public:
	void print() {
		cout << "child" << endl;
	}
};

int main()	{
	Child c1;
	Parent& p1 = c1;
	Parent p2 = Child();

	p1.print();
	p2.print();
	return 0;
}
