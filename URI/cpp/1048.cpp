#include <iostream>
using namespace std;

int main() {
	float salary, new_salary;
	int percentage;
	cin >> salary;

	if (salary <= 400.00)
	{
		new_salary = salary + salary * 15 / 100;
		percentage = 15;
	}
	else if (salary > 400.00 && salary <= 800.00)
	{
		new_salary = salary + salary * 12 / 100;
		percentage = 12;
	}
	else if (salary > 800.00 && salary <= 1200.00)
	{
		new_salary = salary + salary * 10 / 100;
		percentage = 10;
	}
	else if (salary > 1200.00 && salary <= 2000.00)
	{
		new_salary = salary + salary * 7 / 100;
		percentage = 7;
	}
	else if (salary > 2000.00)
	{
		new_salary = salary + salary * 4 / 100;
		percentage = 4;
	}

	std::cout.precision(2);
	cout << "Novo salario: " << fixed << new_salary << endl;
	cout << "Reajuste ganho: " << fixed << new_salary - salary << endl;;
	cout << "Em percentual: " << fixed << percentage << " %" << endl;;

	return 0;
}