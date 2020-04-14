#include <iostream>

using namespace std;

class Person {
private:
    int id;
    string name;

public:

    Person() : id(0), name("") {

    }

    Person(int id, string name) : id(id), name(name) {

    }

    void print() {
        cout << "id: " << id << ", name: " << name << endl;
    }

    const Person& operator=(const Person& other) {
        cout << "Assignment running" << endl;
        id = other.id;
        name = other.name;

        return *this;
    }

    //Copy constructor
    Person(const Person& other) {
        cout << "Copy constructor running" << endl;
        *this = other;
    }
};

int main() {
    Person people1(10, "Mike");
    people1.print();

    Person people2(11, "Toby");
    people2 = people1;
    people2.print();

    Person people3;

    //people3 = people2 = people1;

    people3.operator=(people2);
    people3.print();

    cout << endl;
    
    // Copy initialization
    Person people4 = people1;
    people4.print();

    return 0;

}
