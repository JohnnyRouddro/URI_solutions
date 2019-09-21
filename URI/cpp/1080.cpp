#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input[100];

	for (int i = 0; i < 100; i++)
	{
		cin >> input[i];
	}

	cout << *max_element(input, input + 100) << endl;
	cout << distance(input, max_element(input, input + 100)) + 1 << endl;

	return 0;
}