#include <iostream>
#include "ring.h"

using namespace std;

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

    cout << "last result: " << endl;
    for (auto m : log) {
        cout << m << endl;
    }
    cout << "-- end of final result -- " << endl;
}
