//Imani White, CSPD 221-0101, 4/9/19
//Lab 11 - Reading File, Output File

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	char sex;
	int femaleCount = 0, maleCount = 0;
	float amount;
	float femaleSum = 0, maleSum = 0;
	float femaleAvg, maleAvg;
	ifstream  Infile;
	ofstream Outfile;

	cout << "This program will take in the sex, male or female (M/F), and a respective income\nthen average the incomes of each sex." << endl;
	Infile.open("C:\\Users\\Imani\\Downloads\\inc.txt");
	Outfile.open("C:\\Users\\Imani\\Downloads\\outInc.txt");

	if (!Infile)
	{
		cout << "Could not open file. Program Terminated." << endl;
		return 1;
	}

	while (Infile >> sex >> amount)
	{
		if (sex == 'F' || sex == 'f')
		{
			femaleSum += amount;
			femaleCount++;
		}
		else if (sex == 'M' || sex == 'm')
		{
			maleSum += amount;
			maleCount++;
		}
		else
		{
			cout << "Invalid" << endl;
		}

	}
	Infile.close();

	femaleAvg = round(femaleSum / femaleCount);
	maleAvg = round(maleSum / maleCount);
	Outfile << "For the " << femaleCount << " female(s), the average income is $" << femaleAvg << endl;
	Outfile << "For the " << maleCount << " male(s), the average income is $" << maleAvg << endl << endl;

	return 0;
}



