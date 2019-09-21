#include <iostream>
using namespace std;

int main() {
	int i, j;
	double input[3];

	cin >> input[0] >> input[1] >> input[2];

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (input[j]<input[j+1])
			{
				swap(input[j], input[j+1]);
			}
		}
	}

	if (input[0] >= input[1] + input[2])
	{
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else
	{
		if (input[0] * input[0] == input[1] * input[1] + input[2] * input[2])
		{
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if (input[0] * input[0] > input[1] * input[1] + input[2] * input[2])
		{
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if (input[0] * input[0] < input[1] * input[1] + input[2] * input[2])
		{
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if (input[0] == input[1] && input[1] == input[2])
		{
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		else if (input[0] == input[1] || input[1] == input[2] || input[0] == input[2])
		{
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	return 0;
}