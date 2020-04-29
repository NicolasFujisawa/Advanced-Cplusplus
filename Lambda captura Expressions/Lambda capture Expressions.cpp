#include <iostream>

using namespace std;

int main() {
	int one = 1, two = 2, three =3;
	
	[one, two]() { /* Capture by value */
		cout << one << " and " << two << endl;
	}();

	[=]() { /* Capturing all local variables by value */
		cout << one << " and " << three << endl;
	}();

	[=, &three]() { /* Capturing all by value and three by reference */
		cout << three++ << " to " << three << endl;
	}();

	cout << three << endl;

	[&]() { /* Capturing all values by reference */
		cout << one-- << " to " << one++ << endl;
	}();

	[three]() mutable { /* Capturing by value and changing the value */
		three = 100;
		cout << three << " " << flush;
	}();
	cout << three << endl;
}
