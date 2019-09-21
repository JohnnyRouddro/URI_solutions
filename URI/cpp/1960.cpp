#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    string hundreds[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string tens[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string units[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};

	cin >> n;

	string roman = hundreds[n/100] + tens[(n%100)/10] + units[n%10];

	cout << roman << endl;

	return 0;
}
