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
        cout << this->name << ": " << this->age << endl;
    }
};

int main() {
    
    map<int, Person> people;

    people[0] = Person("Vic", 35);
    people[1] = Person("Georj", 12);
    people[2] = Person("John", 62);

    people.insert(make_pair(55, Person("Bob", 23)));

    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
        it->second.print();
    }

    return 0;
}
