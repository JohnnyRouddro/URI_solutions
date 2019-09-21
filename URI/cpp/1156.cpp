#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double sum = 0, i = 0;

	while (((2*i)+1) <= 39) 
	{
		//cout << (2 * i) + 1 << "/" << pow(2, i) << endl;
		sum = sum + (((2*i)+1) / pow(2, i));
		i++;
	}

	//cout << endl;
	cout.precision(2);
	cout << fixed << sum << endl;

	return 0;
}