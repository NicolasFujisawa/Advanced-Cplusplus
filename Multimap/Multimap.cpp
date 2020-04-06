#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> lookup;

    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(12, "Vic"));
    lookup.insert(make_pair(30, "Muri"));
    lookup.insert(make_pair(30, "Bobby"));
    lookup.insert(make_pair(1, "Bimo"));

    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
    cout << endl;
    /* percorrendo todas as key de mesmo valor c++98*/
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(12);
    
    for (multimap<int, string>::iterator it = its.first; it != its.second; it++) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;
    /* percorrendo todas as key de mesmo valor < c++11 */
    auto its11 = lookup.equal_range(30);

    for (multimap<int, string>::iterator it = its11.first; it != its11.second; it++) {
        cout << it->first << ": " << it->second << endl;
    }
}
