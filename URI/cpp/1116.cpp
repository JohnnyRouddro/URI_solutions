#include <iostream>
using namespace std;

int main()
{
	int n, x, y;

	cin >> n;

	cout.precision(1);

	for (int i = 0; i < n; i++)
	{

		cin >> x >> y;

		if (y == 0)
		{
			cout << "divisao impossivel" << endl;
		}
		else
		{
			cout << fixed << (float)x / (float)y << endl;
		}
	}

	return 0;
}