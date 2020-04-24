#include <iostream>
#include "ring.h"

using namespace std;

template<class T>
void Ring<T>::print() {
    cout << "{" << flush;
    for (int i = 0; i < m_size; ++i) {
        cout << m_values[i] << ", " << flush;
    }
    cout << "}" << endl;
}

int main() {
    Ring<string> log(3);

    log.add(string("1 log ok"));
    log.add(string("2 log ok"));
    log.add(string("3 log ok"));
    log.add(string("4 log ok"));
    log.add(string("5 log ok"));
    log.print();
    log.add(string("6 log ok"));
    log.add(string("7 log ok"));
    log.print();
    log.add(string("8 log ok"));
    log.add(string("9 log ok"));
    log.print();

}
