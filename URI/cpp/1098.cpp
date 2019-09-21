#include <iostream>
using namespace std;

int main() {

	float i = 0.0, j = 1.0;

	for (i = 0.0; i <= 2.1; i += 0.2)
	{
		j += i;
		for (int n = 0; n < 3; n++)
		{
			cout << "I=" << i << " J=" << j++ << endl;
		}
		j = 1;
	}

	return 0;
}