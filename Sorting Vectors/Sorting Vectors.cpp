#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
private:
	int age;
	string name;
public:
	Person(int age, string name) :
		age(age), name(name) {

	}

	void print() {
		cout << "age : " << age << ", name: " << name << endl;
	}


	/* method 1
	bool operator < (const Person& other) const {
		if (age == other.age) {
			return name < other.name;
		}

		return age < other.age;
	}*/

	// method 2
	static bool comp(const Person& a, const Person& b){
		if (a.age == b.age) {
			return a.name < b.name;
		}

		return a.age < b.age;
	}
};

int main() {
	
	vector<Person> ordenedRow = {
		Person(12, "Mike"),
		Person(13, "Lili"),
		Person(15, "Pigmeu"),
		Person(8, "Little sleepy"),
		Person(9, "abby"),
		Person(9, "abbyce"),
		Person(9, "abbi")
	};

	sort(ordenedRow.begin(), ordenedRow.end(), Person::comp);

	for (size_t i = 0; i < ordenedRow.size(); i++) {
		ordenedRow.at(i).print();
	}

	return 0;
}