#include <iostream>
#include <string>
#include <vector>

using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1022
void simplification(int& n, int& d, int div = 2);

void simplification(int& n, int& d, int div) {
	if (n == 1 || d == 1)
		return;

	if (n % div == 0 && d % div == 0) {
		n /= div;
		d /= div;
		simplification(n, d, div);
	}
	else if(div >= n || div >= d) {
		return;
	}
	else {
		simplification(n, d, div + 1);
	}
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
		d2 = stoi(line);
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
		ansN = (n1 * d2);
		ansD = (n2 * d1);
	}
	cout << ansN << "/" << ansD <<" = " << flush;
	simplification(ansN, ansD);
	cout << ansN << "/" << ansD << endl;
}

int main() {

	string n;
	getline(cin, n);
	for (int i = 0; i < stoi(n); ++i) {
		solve();
	}
	return 0;
}