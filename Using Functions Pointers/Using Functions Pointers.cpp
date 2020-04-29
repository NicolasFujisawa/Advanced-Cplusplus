#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool match(string num) {
	return num.size() == 3;
}

int countString(vector<string>& text, bool (*match)(string)) {
	int tally = 0;
	for (string str : text) {
		if (match(str)) {
			tally += 1;
		}
	}
	return tally;
}

int main() {
	vector<string> nums = {
		"one",
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"eight",
		"nine",
		"ten"
	};

	cout << match("one") << endl;

	cout << count_if(nums.begin(), nums.end(), match) << endl;

	cout << countString(nums, match) << endl;
}
