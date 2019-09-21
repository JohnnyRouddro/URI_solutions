#include <iostream>
using namespace std;

int main()
{
	int i = 0, age, total_age = 0;

	while (true)
	{
		cin >> age;
		
		if (age < 0)
			break;

		total_age += age;
		i++;
	}

	cout.precision(2);
	cout << fixed << (float)total_age / (float)i << endl;

	return 0;
}