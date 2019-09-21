#include <iostream>
using namespace std;

int main() {
	float out[10000];
	float num1, num2, num3;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num1 >> num2 >> num3;
		out[i] = (num1 * 2 + num2 * 3 + num3 * 5) / 10;
	}

	cout.precision(1);

	for (int i = 0; i < n; i++)
	{
		cout << fixed << out[i] << endl;
	}

	return 0;
}