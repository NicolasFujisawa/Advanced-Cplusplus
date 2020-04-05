#include <iostream>
#include <map>

using namespace std;

int main() {
	
	map<string, int> age;

	age["Mike"] = 40;
	age["Andrews"] = 23;
	age["Miguel"] = 65;
	age["Miguel"] = 176;

	/* add a pair */
	pair<string, int> addToMap("Peter", 100);
	age.insert(addToMap);
	
	/* add directly */
	age.insert(make_pair("Nico", 21));

	if (age.find("Vic") != age.end()) {
		cout << "Found Vic" << endl;
	}
	else {
		cout << "Key no found" << endl;
	}

	/* iterando entre o map */
	for (map<string, int>::iterator it = age.begin(); it != age.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	/* iterando entre o map com pair */
	for (map<string, int>::iterator it = age.begin(); it != age.end(); it++) {
		pair<string, int> age = *it;
		cout << age.first << ": " << age.second << endl;
	}
	return 0;
}
