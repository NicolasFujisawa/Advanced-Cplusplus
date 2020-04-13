#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Cookie {
private:
    string name;
    double rating;

public:
    Cookie(string name, double rating) :
        name(name), rating(rating) {

    }

    ~Cookie() {
        //cout << "object destroyed" << endl;
    }

    void print() {
        cout << name << ": rating " << rating << endl;
    }
};

class Person {
private:
    string name;
    int age;
public:
    Person(string name, int age) :
        name(name), age(age) {

    }

    ~Person() {

    }

    void print() {
        cout << name << ", " << age << " ages." << endl;
    }
};

int main() {
    
    // LIFO
    stack<Cookie> cookieStack;

    cookieStack.push(Cookie("Strawberry", 4.5));
    cookieStack.push(Cookie("Chocolatey", 5));
    cookieStack.push(Cookie("Vanilla", 4.2));

    /* this is invalid code, 
    Cookie &test1 = cookieStack.top();
    cookieStack.pop();
    test1.print();
    */

    while (cookieStack.size() > 0) {
        Cookie& it = cookieStack.top();
        it.print();
        cookieStack.pop();
    }

    cout << endl;
    // FIFO
    queue<Person> personQueue;

    personQueue.push(Person("Geronimo", 46));
    personQueue.push(Person("Eritchoo", 28));
    personQueue.push(Person("Smitch", 33));

    while (!personQueue.empty()) {
        Person& it = personQueue.front();
        it.print();
        personQueue.pop();
    }
   
    return 0;
}
