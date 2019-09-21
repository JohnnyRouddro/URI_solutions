#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	if (x % 2 == 0)
	{
		x++;
	}

	for (int i = x; i <= x + 10; i+=2)
	{
		cout << i << endl;
	}

	return 0;
}