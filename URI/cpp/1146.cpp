#include <iostream>
using namespace std;

int main()
{
	int x;

	while (true)
	{
		cin >> x;

		if (!x)
			break;

		for (int i = 1; i <= x; i++)
		{
			cout << i;
			if (i == x)
				cout << endl;
			else
				cout << " ";
		}
	}
	return 0;
}