#include <iostream>

using namespace std;

void mightGoWrong() {
    bool error = false;
    bool error2 = false;
    bool error3 = true;

    if (error) {
        throw 400;
    }
    if (error2) {
        throw "Something go wrong";
    }
    if (error3) {
        throw string("Something else went wrong");
    }
}

void useMightGoWrong() {
    mightGoWrong();
}

int main()
{
    try {
        useMightGoWrong();

    }
    catch(int err) {
        cout << "Error code: " << err << endl;
    }
    catch (const char* err) {
        cout << "Error message: " << err << endl;
    }
    catch (string &err) {
        cout << "String error message: " << err << endl;
    }

    cout << "Still running" << endl;
    return 0;
}
