#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<vector<int>> grid(3, vector<int>(4, 7));

	grid.at(1).push_back(8);

	for (vector<int> v : grid) {
		for (int x : v) {
			cout << x;
		}
		cout << endl;
	}
}
