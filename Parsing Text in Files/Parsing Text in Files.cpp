#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {

    string fileName("data.txt");
    ifstream input;

    input.open(fileName);

    if (!input.is_open()) {
        return 1;
    }
    
    while (input) {
        string line;

        getline(input, line, ':');

        int population;
        input >> population;
        input >> ws; /* thats the */
        //input.get();

        if (!input)
            break;

        cout << "'" << line << " -- '" << population << "'" << endl;
    }

    input.close();
    return 0;
}
