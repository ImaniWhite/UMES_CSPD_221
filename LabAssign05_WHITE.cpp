//Imani White, CSPD 221-0101, 2/19/19
//This program computes the total sales tax on a purchase
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//Declaration of variables
	double const STATETAX = 0.04;
	double const COUNTAX = 0.02;

	double purchase, StaxAmt, CtaxAmt, totalTax;

	//Tells the user what the program does and takes the purchase cost
	cout << "This program computes the total tax your purchase. \n What was the purchase cost?";
	cin >> purchase;

	//Calcutaltions
	StaxAmt = purchase * STATETAX;
	CtaxAmt = purchase * COUNTAX;
	totalTax = StaxAmt + CtaxAmt;

	//Displays the results
	cout << "State Tax: $" << setw(7) << fixed << setprecision(2) << StaxAmt << "\n";
	cout << "County Tax: $" << setw(7) << fixed << setprecision(2) << CtaxAmt << "\n";
	cout << "Total Tax: $" << setw(7) << fixed << setprecision(2) << totalTax << "\n";

	return 0;

}