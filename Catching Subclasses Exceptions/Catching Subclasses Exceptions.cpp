#include <iostream>
#include <exception>

using namespace std;

void goesWrong() {
    bool erro1 = true;
    bool erro2 = false;

    if (erro1) {
        throw bad_alloc();
    }
    if (erro2) {
        throw exception();
    }
}

int main()
{
    try {
        goesWrong();
    }
    catch (bad_alloc & e) { /* tem que buscar primeiro as subclasses*/
        cerr << "Catching bad_alloc: " << e.what() << endl;
    }
    catch (exception & e) { 
        cout << "Catching exception: "<< e.what() << endl;
    }
    
    std::cout << "Still Running!\n";
}
