//Imani White, CSPD 221-0101, 3/7/19
//This program will tell you how many days are in a month using switch statements. LAB 05
#include <iostream>

using namespace std;

int main() {
	int month, year;

	cout << "This program will tell you how many days are in a month.\nPlease enter the month (1-12):";
	cin >> month;

	switch (month) {
	case 1:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 31 days in " << year << ".";
		break;

	case 2:
		cout << "\nWhat year? ";
		cin >> year;
		if ((year%400 == 0 && year % 100 == 0) || (year % 100 != 0 && year % 4 == 0))
			cout << "There are 29 days.";
		else
			cout << "There are 28 days.";
		break;

	case 3:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 31 days in " << year << ".";
		break;

	case 4:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 30 days in " << year << ".";
		break;

	case 5:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 31 days in " << year << ".";
		break;

	case 6:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 30 days in " << year << ".";
		break;

	case 7:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 31 days in " << year << ".";
		break;

	case 8:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 31 days in " << year << ".";
		break;

	case 9:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 30 days in " << year << ".";
		break;

	case 10:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 31 days in " << year << ".";
		break;

	case 11:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 30 days in " << year << ".";
		break;

	case 12:
		cout << "\nWhat year?";
		cin >> year;
		cout << "There are 31 days in " << year << ".";
		break;

	default:
		cout << "That is not a valid intput. Please restart the program";
		break;
	}
	return 0;
}
