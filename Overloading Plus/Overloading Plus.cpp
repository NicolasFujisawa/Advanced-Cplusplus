#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    Complex c1(3, 4);
    Complex c2(1, 5);

    cout << c1 << " + " << c2 << "= " << flush;
    cout << c1 + c2 << endl;

    if (c1 == c2) {
        cout << c1 << " and " << c2 << flush;
        cout << " are equals" << endl;
    }
    else if (c1 != c2) {
        cout << c1 << " and " << c2 << flush;
        cout << " aren't equals" << endl;
    }
    return 0;
}
