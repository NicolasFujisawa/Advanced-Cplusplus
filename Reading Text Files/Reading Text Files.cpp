#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream file;
    string fileName("test.txt");

    file.open(fileName);
    //file.open(fileName, ios::in);

    if (file.is_open()) {
        string line;
        //file >> line;

        while (file) {
            getline(file, line);
            cout << line << endl;
        }


        file.close();
        
    }
    else {
        cout << "cannot open file " << fileName << endl;
    }

    std::cout << "Hello World!\n";
}
