#include <iostream>
using namespace std;

int main()
{
	int a, n, sum = 0;
	
	cin >> a >> n;

	while (n <= 0)
		cin >> n;

	sum = (n * (2 * a + n - 1))/2;

	cout << sum << endl;

	return 0;
}