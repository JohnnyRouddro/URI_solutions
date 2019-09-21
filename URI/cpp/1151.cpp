#include <iostream>
using namespace std;

int main()
{
	int n, temp_f1, f1 = 0, f2 = 1;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i <= 2)
			cout << i - 1;
		else
		{
			temp_f1 = f1;
			f1 = f2;
			f2 = temp_f1 + f2;
			cout << f2;
		}

		if (i == n)
			cout << endl;
		else
			cout << " ";
	}

	return 0;
}