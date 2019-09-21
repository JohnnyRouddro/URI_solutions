#include <iostream>
#include <string>
using namespace std;

int main() {
	string string1, string2, string3;

	cin >> string1;
	cin >> string2;
	cin >> string3;

	if (string1 == "vertebrado")
	{
		if (string2 == "ave")
		{
			if (string3 == "carnivoro")
			{
				cout << "aguia" << endl;
			}
			else if (string3 == "onivoro")
			{
				cout << "pomba" << endl;
			}
		}
		else if (string2 == "mamifero")
		{
			if (string3 == "onivoro")
			{
				cout << "homem" << endl;
			}
			else if (string3 == "herbivoro")
			{
				cout << "vaca" << endl;
			}
		}
	}
	else if (string1 == "invertebrado")
	{
		if (string2 == "inseto")
		{
			if (string3 == "hematofago")
			{
				cout << "pulga" << endl;
			}
			else if (string3 == "herbivoro")
			{
				cout << "lagarta" << endl;
			}
		}
		else if (string2 == "anelideo")
		{
			if (string3 == "hematofago")
			{
				cout << "sanguessuga" << endl;
			}
			else if (string3 == "onivoro")
			{
				cout << "minhoca" << endl;
			}
		}
	}

	return 0;
}