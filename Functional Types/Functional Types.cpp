#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

bool check(string& test) {
	return test.size() == 3;
}

class Check {
public:
	bool operator()(string& test) {
		return test.size() == 4;
	}
};

void run(function<bool(string&)> check) {
	string test = "fifth";
	cout << check(test) << endl;
}

int main() {
	int size = 5;

	vector<string> num{
		"one",
		"two",
		"three",
		"four"
	};

	auto lambda = [size](string s) {
		return s.size() == size;
	};

	int ans = count_if(num.begin(), num.end(), lambda);
	cout << ans << endl;

	ans = count_if(num.begin(), num.end(), check);
	cout << ans << endl;

	Check check1;
	ans = count_if(num.begin(), num.end(), check1);
	cout << ans << endl;

	run(lambda);
	run(check1);
	run(check);

	function<int(int, int)> add = [](int a, int b) {
		return a + b;
	};

	cout << add(1, 2) << endl;
}
