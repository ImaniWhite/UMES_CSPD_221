//Imani White, CSPD 221-0101, 4/16/19
//Lab 13 - Present Value
//Suppose you want to deposit a certain amount of money into a savings account
//and then leave it alone to draw interest for the next 10 years...

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function prototypes
double presentValue(double, double, int);

int main()
{
		double P, F, r; //Present Value, Future Value, Annual Rate
		int n; //Years
		char ans = 'y'; //do while control
    do
	{
		cout << "This program will accept a future value, annual interest rate, and number of years\n and return the present value, which is the amount that you need to deposit today.\nEnter the FUTURE VALUE:";
		cin >> F;
		cout << "Enter the ANNUNAL INTREST RATE:";
		cin >> r;
		cout << "Enter the time in YEARS what will pass:";
		cin >> n;

		P = presentValue(F, r, n);

		cout << "You need to deposit $" << fixed << showpoint << setprecision(2) << P << " to have a balance of $" << fixed << showpoint << setprecision(2) << F << " in " << n << " years." << endl;
		cout << "Would you like to run this program again?" << endl;
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');

	return 0;
}

// Function definition
double presentValue(double Fvalue, double Rate, int Years)
{ 
	return (Fvalue / pow(1 + Rate, Years));
}