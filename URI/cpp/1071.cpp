#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int x, y;

	cin >> x >> y;

	if (x > y)
	{
		swap(x, y);
	}

	x++;
	y--;

	if (x == y)
	{
		cout << 0 << endl;
		return 0;
	}
	if (abs(y) % 2 == 0)
	{
		y--;
	}
	if (abs(x) % 2 == 0)
	{
		x++;
	}

	if ((x > 0 && y > 0) || (x < 0 && y < 0))
	{
		cout << ((y - x + 2) * (x + y) / 4) << endl;
	}
	else if (x < 0 && y > 0)
	{
		int f_half = ((x / abs(x)) * ((abs(x) + 1) * (abs(x) + 1) / 4));
		int s_half = ((y / abs(y)) * ((abs(y) + 1) * (abs(y) + 1) / 4));
		cout << f_half + s_half << endl;
	}

	return 0;
}