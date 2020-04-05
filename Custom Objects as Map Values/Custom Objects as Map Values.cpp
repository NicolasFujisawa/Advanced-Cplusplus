#include <iostream>
#include <map>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() : name(""), age(0) {

    }

    /* for futures operator overloads */
    Person(const Person& other) {
        cout << "Copy constructor running!" << endl;
        name = other.name;
        age = other.age;
    }

    Person(string name, int age) :
        name(name), age(age) {
    }

    void print() const {
        cout << name << ": " << age << flush;
    }

    bool operator<(const Person& other) const {
        if (name == other.name) {
            return age < other.age;
        }
        else {
            return name < other.name;
        }
    }
};

int main() {

    map<Person, int> people;

    people[Person("Vic", 35)] = 0;
    people[Person("Georj", 12)] = 1;
    people[Person("Georj", 50)] = 32;
    people[Person("John", 62)] = 2;

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;
    }

    return 0;
}
