#include <iostream>
using namespace std;


int main()
{
	int novo, int_win = 0, i, grem_win = 0, g, grenais_num = 0, draws_num = 0;
	
	while (true)
	{
		cin >> i >> g;

		grenais_num++;

		if (i > g)
		{
			int_win++;
		}
		else if (i < g)
		{
			grem_win++;
		}
		else if (i == g)
		{
			draws_num++;
		}

		while (true)
		{
			cout << "Novo grenal (1-sim 2-nao)" << endl;
			cin >> novo;

			if (novo == 1)
			{
				break;
			}
			else if (novo == 2)
			{
				cout << grenais_num << " grenais" << endl;
				cout << "Inter:" << int_win << endl;
				cout << "Gremio:" << grem_win << endl;
				cout << "Empates:" << draws_num << endl;

				if (int_win > grem_win)
				{
					cout << "Inter venceu mais" << endl;
				}
				else if (int_win < grem_win)
				{
					cout << "Gremio venceu mais" << endl;
				}
				else if (int_win == grem_win)
				{
					cout << "Nao houve vencedor" << endl;
				}
				return 0;
			}
			else
				continue;
		}

	}

	return 0;
}