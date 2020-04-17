#include <iostream>
#include "complex.h"

using namespace std;

int main() {
	Complex c1(2, 3);

	Complex c2 = c1;

	cout << c1 << ", " << c2 << endl;
	return 0;
}
