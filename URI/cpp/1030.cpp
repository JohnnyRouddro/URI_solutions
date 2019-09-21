#include <iostream>
using namespace std;

int josephus(int n, int k) {

	if (n == 1)
	{
		return 1;
	}

	return ((josephus(n - 1, k) + k - 1) % n + 1);

}

int main() {
	int np, n, k;

	cin >> np;

	for (int i = 1; i <= np; i++)
	{
		cin >> n >> k;
		cout << "Case " << i << ": " << 2 * (n - pow(2, log(n))) + 1 << endl;
		//cout << "Case " << i << ": " << josephus(n, k) << endl;
	}


	return 0;
}