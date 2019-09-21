#include <iostream>
using namespace std;

int main()
{
	int f, alcohol = 0, gasoline = 0, diesel = 0;

	while (true)
	{
		cin >> f;
		
		if (f == 1)
		{
			alcohol++;
		}
		else if (f == 2)
		{
			gasoline++;
		}
		else if (f == 3)
		{
			diesel++;
		}
		else if (f == 4)
		{
			cout << "MUITO OBRIGADO" << endl;
			cout << "Alcool: " << alcohol << endl;
			cout << "Gasolina: " << gasoline << endl;
			cout << "Diesel: " << diesel << endl;
			return 0;
		}
		else
		{
			continue;
		}
	}


	return 0;
}