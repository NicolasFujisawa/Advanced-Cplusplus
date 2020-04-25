#include <iostream>

using namespace std;

void test(void (*pFunc)()) {
	pFunc();
}

int main() {
	/* lambda expressions
	** functions that doens't have a name
	*/

	auto func = []() { cout << "Ola mundo!" << endl; };
	func();

	// []() { cout << "Olá mundo!" << endl; }();

	test(func);
	return 0;
}
