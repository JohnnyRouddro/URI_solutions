#include <iostream>
using namespace std;

int main()
{
	float x, y;

	cout.precision(2);

	while (true)
	{
		cin >> x;
		if (x < 0 || x > 10)
		{
			cout << "nota invalida" << endl;
		}
		else
			break;
	}
	
	while (true)
	{
		cin >> y;
		if (y < 0 || y > 10)
		{
			cout << "nota invalida" << endl;
		}
		else
			break;
	}

	cout << "media = " << fixed << (x + y) / 2 << endl;

	return 0;
}