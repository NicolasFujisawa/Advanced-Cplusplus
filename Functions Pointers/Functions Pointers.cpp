#include "Functions Pointers.h"
#include <iostream>

using namespace std;

int add(int &id) {
	id += 1;
	return id - 1;
}

int main() {
	int number = 0;

	int (*pTest)(int&);

	pTest = add;

	cout << pTest(number)<< " -> " << number << endl;;

	return 0;
}
