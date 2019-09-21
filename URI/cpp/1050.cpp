#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	std::map<int, std::string> table;
	int d;

	table[61] = "Brasilia";
	table[71] = "Salvador";
	table[11] = "Sao Paulo";
	table[21] = "Rio de Janeiro";
	table[32] = "Juiz de Fora";
	table[19] = "Campinas";
	table[27] = "Vitoria";
	table[31] = "Belo Horizonte";

	cin >> d;
	if (table[d] == "")
	{
		cout << "DDD nao cadastrado" << endl;
	}
	else
	{
		cout << table[d] << endl;
	}

	return 0;
}