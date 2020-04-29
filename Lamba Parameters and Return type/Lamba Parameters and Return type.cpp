#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

class Number {
private:
    int one{ 1 };
    int two{ 2 };
public:
    void run() {

        auto lambda = [this]() {
            cout << one << endl;
            cout << two << endl;
        };
        lambda();
    }
};

void pDivide(double (*divide)(double a, double b)) {
    cout << divide(12 , 4) << endl;
}

void ido( void (*IDO)(string) ) {
    IDO("We can have a dog!");
}

int main() {
    auto iDo = [](string str) {
        int s = str.size();
        char a;
        for (int i = 0, j = s - 1; i < j; i++, j--) {
            a = str[i];
            str[i] = str[j];
            str[j] = a;
        }
        cout << "I do " << str << endl;
    };

    auto other = [](string str) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                str.erase(str.begin() + i);
            }
        }
        cout << "I do " << str << endl;
    };
    iDo("Hi you");

    ido(iDo);
    ido(other);


    auto pdivide = [](double a, double b) {
        if (b == 0.0) {
            return 0.0;
        }
        return a / b;
    };
    
    cout << pdivide(10, 2) << endl;

    pDivide(pdivide);

    Number number;
    number.run();
}
