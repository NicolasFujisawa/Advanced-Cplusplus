#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<double> number(20);

	cout << "Size: " << number.size() << endl;

	/* criando outro vector maior e colocando na ultima posição do vector number*/
	size_t capacity = number.capacity();
	cout << "Capacity: " << capacity << endl;

	/* vector capacity expands exponentialy */
	for (int i = 0; i < 10000; i++)
	{
		if (number.capacity() != capacity) {
			capacity = number.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		number.push_back(i);
	}

	number.clear();
	//number.reserve(100000);
	cout << "Size: " << number.size() << endl;
	cout << "Capacity: " << number.capacity() << endl; /* capacity doenst downgrade */
	/* the solution is re-initialize */
}
