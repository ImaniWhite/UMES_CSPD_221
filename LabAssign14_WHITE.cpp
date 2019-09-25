//Imani White, CSPD 221-0101, 4/16/19
//Lab 14 - Falling Distance

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double G = 9.8;

double fallingDistance(int);

int main()
{
	cout << "Seconds		Distance"<<endl;
	cout << "==================================="<<endl;
	for (int x = 1; x <= 10; x++)
	{
		cout << x << fixed << setw(17) << showpoint << setprecision(2) << fallingDistance(x) << " meters" << endl;
	}
}

double fallingDistance(int time)
{
	return (0.5*G*pow(time, 2));;
}