#include <iostream>
#include <string>
using namespace std;

int main() {
	string garbage;
	int s_day, e_day, s_hour, e_hour, s_minute, e_minute, s_second, e_second, duration, day, hour, minute, second;

	cin >> garbage >> s_day >> s_hour >> garbage >> s_minute >> garbage >> s_second;

	cin >> garbage >> e_day >> e_hour >> garbage >> e_minute >> garbage >> e_second;
	
	duration = (86400 * e_day + 3600 * e_hour + 60 * e_minute + e_second) - (86400 * s_day + 3600 * s_hour + 60 * s_minute + s_second);
	
	day = duration / 86400;
	duration = duration % 86400;
	hour = duration / 3600;
	duration = duration % 3600;
	minute = duration / 60;
	duration = duration % 60;
	second = duration;

	cout << day << " dia(s)" << endl;
	cout << hour << " hora(s)" << endl;
	cout << minute << " minuto(s)" << endl;
	cout << second << " segundo(s)" << endl;

	return 0;
}