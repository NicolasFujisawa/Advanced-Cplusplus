#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> number(4, 1);


	list<int>::iterator it = number.begin();
	it++;
	number.insert(it, 100);

	list<int>::iterator popIt = --it;
	cout << "Element: " << *popIt << endl;
	popIt = number.erase(popIt);
	cout << "Element: " << *popIt << endl;

	for (list<int>::iterator it = number.begin(); it != number.end(); it++) {
		cout << *it << endl;
	}
	return 0;
}
