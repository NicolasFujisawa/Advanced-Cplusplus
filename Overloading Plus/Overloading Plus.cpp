#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    Complex c1(3, 4);
    Complex c2(1, 5);

    cout << c1 << " + " << c2 << "= " << flush;
    cout << c1 + c2 << endl;
    return 0;
}
