#include <iostream>
using namespace std;

int main() {

	int i = 1, j = 7;

	while (!(i == 9 && j == 5))
	{
		cout << "I=" << i << " J=" << j << endl;
		j -= 1;
		if (j < 5)
		{
			i += 2;
			j = 7;
		}
	}
	cout << "I=" << i << " J=" << j << endl;

	return 0;
}