//Imani White, CSPD 221-0101, 2/14/19
//This program computes the tax and tip of a restaurant bill
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	//Declaration of variables
	double const TAX = 0.0675;
	double const TIP = 0.2;

	double mealCost, taxAmt, tipAmt, totalBill;

	//Tells the user what the program does and takes the meal cost
	cout << "This program computes the tax and tip of a restaurant bill. \n What was the meal cost?";
	cin >> mealCost;

	//Calcutaltions
	taxAmt = mealCost * TAX;
	tipAmt = mealCost * TIP;
	totalBill = taxAmt + tipAmt + mealCost;

	//Displays the results
	cout << "Meal: $" << fixed << setprecision(2) << mealCost << "\n";
	cout << "Tax: $" << fixed << setprecision(2) << taxAmt << "\n";
	cout << "Tip: $" << fixed << setprecision(2) << tipAmt << "\n";
	cout << "Total: $" << fixed << setprecision(2) << totalBill << "\n";

	return 0;
}