#include <iostream>
#include <functional>

using namespace std;
int add(int a = 2, int b = 3, int c = 4);
int add(int a, int b, int c) {
    cout << a << "+" << flush;
    cout << b << "+" << flush;
    cout << c << "= " << flush;
    return a + b + c;
}

void run(function<int(int, int)> func) {
    func(3, 7);
}

int main() {
    // cout << add(1, 2, 3) << endl;
    auto calculator = bind(add, placeholders::_1, placeholders::_2, placeholders::_3);

    cout << calculator(10, 20, 30) << endl;
    cout << add() << endl;
    
    //run(calculator);
    return 0;
}
