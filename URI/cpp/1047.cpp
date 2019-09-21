#include <iostream>
using namespace std;

void out(int hour, int minute) {
	cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)" << endl;
}

int main() {
	int init_hour, init_min, final_hour, final_min;

	cin >> init_hour >> init_min >> final_hour >> final_min;

	int duration_hour = final_hour - init_hour;
	if (duration_hour < 0)
	{
		duration_hour = 24 + final_hour - init_hour;
	}

	int duration_min = final_min - init_min;
	if (duration_min < 0)
	{
		duration_min = 60 + final_min - init_min;
		duration_hour--;
	}

	if (final_hour == init_hour && final_min == init_min)
	{
		out(24, 0);
	}
	else
	{
		out(duration_hour, duration_min);
	}

	return 0;
}