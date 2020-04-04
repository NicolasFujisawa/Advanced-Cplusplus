#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream file;

    fstream file;

    string fileName("fstream.txt");
    file.open(fileName, ios::out);



    if (file.is_open()) {
        file << "Hello there" << endl;
        file << 123 << endl;
        file.close();
    }
    else {
        cout << "Could not create file: " << endl;
    } 
}
