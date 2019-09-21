#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int input, evens = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (abs(input) % 2 == 0)
		{
			evens++;
		}
	}

	cout << evens << " valores pares" << endl;

	return 0;
}