#include <iostream>

using namespace std;

int main()
{
	int animals = 0, rabbit = 0, rat = 0, frog = 0, n, animal_num;
	char animal_type;

	cin >> n;

	while (n)
	{
		cin >> animal_num >> animal_type;
		//cout << animal_num << endl;
		//cout << animal_type << endl;
		if (animal_type == 'C' || animal_type == 'c')
		{
			rabbit += animal_num;
		}
		else if (animal_type == 'R' || animal_type == 'r')
		{
			rat += animal_num;
		}
		else if (animal_type == 'S' || animal_type == 's')
		{
			frog += animal_num;
		}
		animals += animal_num;
		animal_num = 0;
		n--;
	}

	cout.precision(2);

	cout << "Total: " << animals << " cobaias" << endl;
	cout << "Total de coelhos: " << rabbit << endl;
	cout << "Total de ratos: " << rat << endl;
	cout << "Total de sapos: " << frog << endl;
	cout << fixed << "Percentual de coelhos: " << (float)rabbit / (float)animals * 100.00 << " %" << endl;
	cout << fixed << "Percentual de ratos: " << (float)rat / (float)animals * 100.00 << " %" << endl;
	cout << fixed << "Percentual de sapos: " << (float)frog / (float)animals * 100.00 << " %" << endl;

	return 0;
}