#include <iostream>
using namespace std;

int main() {

	int i = 1, j = 7;

	for (i = 1; i <= 9; i += 2)
	{
		for (int n = 0; n < 3; n++)
		{
			cout << "I=" << i << " J=" << j << endl;
			j--;
		}
		j += 5;
	}

	return 0;
}