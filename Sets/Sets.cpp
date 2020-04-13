#include <iostream>
#include <set>

using namespace std;

int main() {
    
    set<int> number{ 50, 21, 12, 32, 56, 56, 23 };

    for (set<int>::iterator it = number.begin(); it != number.end(); it++) {
        cout << *it << endl;
    }
}
