#include <iostream>
using namespace std;

int main()
{
	float a = 1, sum = 0;

	for (int i = 1; i <= 100; i++) {
		sum = sum + (1 / a);
		a++;
	}

	cout.precision(2);
	cout << fixed << sum << endl;

	return 0;
}