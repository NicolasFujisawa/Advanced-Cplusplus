#include <iostream>

using namespace std;

class CanGoWrong: public exception {
public:
    CanGoWrong() {
        int* myarray = new int[99999900000999999];
        delete[] myarray;
    }
};


int main()
{
    try {
        CanGoWrong wrong;

    }
    catch (bad_alloc &e) {
        cout << "error: " << e.what() << endl;
    }
    return 0;
}
