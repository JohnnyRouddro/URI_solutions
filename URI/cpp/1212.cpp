#include <iostream>
using namespace std;

int main() {
	long int x, y, c = 0, carry = 0;

	while (cin >> x >> y && (x || y))
	{
		while (x != 0 || y != 0)
		{
			if (x % 10 + y % 10 + c >= 10)
			{
				c = 1;
				carry++;
			}
			else
			{
				c = 0;
			}
			x = x / 10;
			y = y / 10;
		}
		
		if (carry == 0)
		{
			cout << "No carry operation." << endl;
		}
		else if (carry == 1)
		{
			cout << carry << " carry operation." << endl;
		}
		else if (carry > 1)
		{
			cout << carry << " carry operations." << endl;
		}

		carry = 0;
		c = 0;
	}

	return 0;
}