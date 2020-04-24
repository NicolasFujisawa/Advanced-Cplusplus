#include <iostream>

using namespace std;

struct Test {
	virtual bool operator()(string& s) = 0;
	virtual ~Test() {};
};

struct Match :public Test{
	bool operator()(string &s) {
		return s == "lion";
	}
};

void check(string text, Test &test) {
	if (test(text)) {
		cout << "Text matched!" << endl;
	}
	else {
		cout << "No match" << endl;
	}
}

int main() {
	Match pred;

	string value("Lion");

	cout << pred(value) << endl;

	check("lion", pred);
}
