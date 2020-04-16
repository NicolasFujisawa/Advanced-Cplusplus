#include <iostream>

using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person() :
		name(""), age(0) { }

	Person(string name, int age) :
		name(name), age(age) { }

	void print() {
		cout << "name: " << name << ", " << age << "yo." << endl;
	}

	const Person& operator=(const Person& that) {
		age = that.age;
		name = that.name;

		return *this;
	}

	Person(const Person& that) {
		*this = that;
	}
	
	friend ostream& operator<<(ostream& out, const Person& that);
};

ostream& operator<<(ostream& out, const Person& that) {
	out << "name: " << that.name << ", " << that.age << " years.";

	return out;
}

int main() {
	Person people1 = Person("Nicolas", 21);

	Person people2 = Person(people1);

	cout << people2 << endl;

	return 0;
}
