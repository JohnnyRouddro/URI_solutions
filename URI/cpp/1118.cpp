#include <iostream>
using namespace std;

int main()
{
	float x, y;
	int novo;

	while (true)
	{
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

		cout.precision(2);
		cout << "media = " << fixed << (x + y) / 2 << endl;

		while (true)
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> novo;

			if (novo == 1)
			{
				break;
			}
			else if (novo == 2)
			{
				return 0;
			}
			else
				continue;
		}

	}

	return 0;
}