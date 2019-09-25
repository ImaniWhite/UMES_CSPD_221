// Program03 WHITE 
//Imani White, CSPD 221-0101, 3/3/19
//Program 04 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const double SECS_MIN = 60;
	const double SECS_HOUR = 3600;
	const double SECS_DAY = 86400;

	int seconds;
	float minutes, hours, days;

	cout << " This program takes a number of seconds and calculates the number of minutes, hours, and days.\nEnter the number of seconds.";
	cin >> seconds;
	cout << " There are "<< seconds << " seconds" << endl;

	if (seconds >= SECS_MIN)
		minutes = seconds / SECS_MIN;
		cout << " There are "<< minutes << " minutes in "<< seconds << " seconds" <<endl;
	if (seconds >= SECS_HOUR)
		hours = seconds / SECS_HOUR;
		cout << " There are " << hours << " hours in " << seconds << " seconds" << endl;
	if (seconds >= SECS_DAY)
		days = seconds / SECS_DAY;
		cout << " There are " << days << " days in " << seconds << " seconds" << endl;

		return 0;
}