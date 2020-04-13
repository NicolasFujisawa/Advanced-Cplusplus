#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	
	map<string, vector<int>> scores;

	scores["Mike"].push_back(10);
	scores["Luke"].push_back(15);
	scores["Tony"].push_back(20);
	scores["Tony"].push_back(25);

	for (map<string, vector<int>>::iterator it= scores.begin(); it != scores.end(); ++it) {

		cout << "name: " << it->first << ", score: " << flush;

		for (size_t i = 0; i < it->second.size(); ++i) {
			cout << it->second.at(i) << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
