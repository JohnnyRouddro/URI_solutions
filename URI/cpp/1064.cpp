#include <iostream>
using namespace std;

int main() {
	float num, pos_sum = 0.0;
	int positives = 0;
	
	for (int i = 0; i < 6; i++)
	{
		cin >> num;
		if (num > 0)
		{
			positives++;
			pos_sum += num;
		}
	}
	cout.precision(1);
	cout << positives << " valores positivos" << endl;
	cout << fixed << pos_sum / (float)positives << endl;

	return 0;
}