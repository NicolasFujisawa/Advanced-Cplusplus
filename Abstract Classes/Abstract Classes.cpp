#include <iostream>

using namespace std;

class Animal {
public:
	Animal() {
		cout << "New animal!" << endl;
	}
	virtual void run() = 0;
	virtual void speak() = 0;
};

class Dog : public Animal {
public:
	virtual void speak() {
		cout << "Woof!" << endl;
	}
};

class Puggle : public Dog {
public:
	Puggle() {
		cout << "New puggle!" << endl;
	}
	virtual void run() {
		cout << "Puggle spleeping" << endl;
	}
};

void test(Animal& a) {
	a.run();
}

int main() {
	Puggle pug;

	pug.run();
	pug.speak();

	Animal* animals[5];
	animals[0] = &pug;

	animals[0]->speak();

	test(pug);
}
