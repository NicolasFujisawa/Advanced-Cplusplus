#include <iostream>
#include <string>
#include <vector>

using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1022
void simplification(int& n, int& d) {
	int auxN = n, auxD = d;
	int def = 2;
	while (def >= auxN || def >= auxD) {
		if (auxN % def == 0 && auxD % def == 0) {
			auxN = auxN / def;
			auxD = auxD / def;
		}
		else {
			def++;
		}
	}
	cout << auxN << "/" << auxD << endl;
}

void solve() {
	string line;
	getline(cin, line);

	vector<string> split;
	std::string delimiter = " ";
	size_t pos = 0;
	std::string token;
	while ((pos = line.find(delimiter)) != std::string::npos) {
		token = line.substr(0, pos);
		split.push_back(token);
		line.erase(0, pos + delimiter.length());
	}
	//cout << split.at(1) << endl;
	int n1 = stoi(split.at(0)),
		d1 = stoi(split.at(2)),
		n2 = stoi(split.at(4)),
		d2 = stoi(split.at(6));
	int ansN=0, ansD=0;
	// operator split.at(3)
	if (split.at(3) == "+") {
		ansN = (n1 * d2 + n2 * d1);
		ansD = (d1 * d2);
	}
	else if (split.at(3) == "-") {
		ansN = (n1 * d2 - n2 * d1);
		ansD = (d1 * d2);
	}
	else if (split.at(3) == "*") {
		ansN = (n1 * n2);
		ansD = (d1 * d2);
	}
	else if (split.at(3) == "/") {
		ansN = (n1 / d1);
		ansD = (n2 / d2);
	}
	cout << ansN << "/" << ansD <<" = " << flush;
	simplification(ansN, ansD);
}

int main() {

	string n;
	getline(cin, n);
	for (int i = 0; i < stoi(n); ++i) {
		solve();
	}
	return 0;
}