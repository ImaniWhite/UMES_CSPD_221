#include <iostream>
#include <fstream>

using namespace std;

int main() {
	char sex;
	int femaleCount = 0, maleCount = 0;
	float amount;
	float femaleSum = 0, maleSum = 0;
	float femaleAvg, maleAvg;

	cout << "This program will take in the sex, male or female (M/F), and a respective income\nthen average the incomes of each sex." << endl;
	cout << "Enter the sex and then the income. Example 'F 78000'\nEnter Ctrl Z and press Enter to stop" << endl;

	while (cin)
	{
		cin >> sex;
		cin >> amount;

		if (sex == 'F' || sex == 'f')
		{
			femaleSum += amount;
			femaleCount++;
			cout << "Enter another set" << endl;
		}
		else if (sex == 'M' || sex == 'm')
		{
			maleSum += amount;
			maleCount++;
			cout << "Enter another set" << endl;
		}
		else
		{
			cout << "Invalid entry. Put F or M  and a number or Ctrl Z to stop" << endl;
		}
	}

	femaleAvg = round(femaleSum / femaleCount);
	maleAvg = round(maleSum / maleCount);
	cout << "For the " << femaleCount << " female(s), the average income is $" << femaleAvg << endl;
	cout << "For the " << maleCount << " male(s), the average income is $" << maleAvg << endl << endl;

	return 0;
}
