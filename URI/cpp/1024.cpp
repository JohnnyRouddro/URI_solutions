#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int cases;

	cin >> cases;
	cin.ignore();

	while(cases)
	{
		string m;
		getline(cin, m);

		for (int i = 0; i < m.length(); i++)
		{
			if (isalpha(m[i]))
			{
				m[i] = (char)(m[i] + 3);
			}
		}

		reverse(m.begin(), m.end());

		for (int i = trunc(m.length()/2); i < m.length(); i++)
		{
				m[i] = (char)(m[i] - 1);
		}

		cout << m << endl;
		--cases;
	}
	
	return 0;
}
