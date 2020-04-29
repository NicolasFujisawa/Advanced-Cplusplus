#include <iostream>

using namespace std;

class Parent {
public:
    void speak() {
        cout << "Static casts;." << endl;
    }
};

class Brother : public Parent {

};

class Sister : public Parent {

};
int main() {
    Parent parent;
    Brother brother;

    Parent* ppb = &brother;
    Brother* pbp = static_cast<Brother *>(&parent);
    // Brother* pbp2 = &parent; err
    Brother* pbb = &brother;
    Parent&& p = static_cast<Parent &&>(parent);
    p.speak();
    pbb->speak();

    return 0;
}
