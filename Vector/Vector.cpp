#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    for (string str : strings) {
        cout << str << endl;
    }

    /* percorrer por iterator só é mais vantajoso quando usa-se especificas bibliotecas, como VSTO */
    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
        cout << *it << endl;
    }
}
