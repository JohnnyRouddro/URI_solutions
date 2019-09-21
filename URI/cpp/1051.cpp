#include <iostream>
using namespace std;

int main() {
	float salary, tax;

	cin >> salary;

	if (salary <= 2000.00)
	{
		cout << "Isento" << endl;
		return 0;
	}
	else if (salary > 2000.00 && salary <= 3000.00)
	{
		tax = (salary - 2000.00) * 8 / 100;
	}
	else if (salary > 3000.00 && salary <= 4500.00)
	{
		tax = ((salary - 3000.00) * 18 / 100) + 80;
	}
	else if (salary > 4500.00)
	{
		tax = ((salary - 4500.00) * 28 / 100) + 350;
	}

	cout.precision(2);
	cout << "R$ " << fixed << tax << endl;

	return 0;
}