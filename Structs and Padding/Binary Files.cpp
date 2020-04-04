#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double height;
};
#pragma pack(pop)

int main()
{
    Person someone = { "Andrews", 23, 1.89 };
    string fileName("test.bin");

    /* Writing in a binary file */
    ofstream outFile;

    outFile.open(fileName, ios::binary);

    if (outFile.is_open()) {
        outFile.write(reinterpret_cast<char*>(&someone), sizeof(Person));
        //outFile.write((char*)&someone, sizeof(Person));
        outFile.close();
    }
    else {
        cout << "Could not create file " << fileName << endl;
    }

    /* Reading the binary file */
    Person someoneElse = {};

    ifstream inFile;

    inFile.open(fileName, ios::binary);

    if (inFile.is_open()) {
        inFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));
        //inFile.write((char*)&someone, sizeof(Person));
        inFile.close();
    }
    else {
        cout << "Could not read file " << fileName << endl;
    }

    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

    //cout << sizeof(Person) << endl;
}
