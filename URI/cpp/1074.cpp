#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n, input[10000];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (input[i] == 0)
		{
			cout << "NULL" << endl;
			continue;
		}

		if (abs(input[i]) % 2 == 0)
		{
			cout << "EVEN ";
		}
		else
		{
			cout << "ODD ";
		}

		if (input[i] > 0)
		{
			cout << "POSITIVE" << endl;
		}
		else
		{
			cout << "NEGATIVE" << endl;
		}
	}

	return 0;
}