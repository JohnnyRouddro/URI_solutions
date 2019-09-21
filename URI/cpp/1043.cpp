#include <iostream>
using namespace std;

int main() {
	float A, B, C;

	cin >> A >> B >> C ;
	cout.precision(1);

	if (A+B>C && B+C>A && C+A>B)
	{
		cout << "Perimetro = " << fixed << A + B + C << endl;
	}
	else
	{
		cout << "Area = " << fixed << C * (A + B) / 2 << endl;
	}
	
	return 0;
}