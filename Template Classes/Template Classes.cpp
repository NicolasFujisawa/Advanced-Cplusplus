#include <iostream>

using namespace std;

template<class T>
class Container {
private:
    T data;
    Container* next;
public:
    Container(T obj) : data(obj), next(NULL) { }

    void print() {
        cout << data << endl;
    }
    
    void push_back(T obj) {
        *this->next = new Container(obj);
    }
    Container getNext() {
        return *this->next;
    }

    T getData() {
        return this->data;
    }

};

int main() {
    Container<int> cont(100);

    //cont.push_back(1);

    cout << cont.getData() << endl;
}


