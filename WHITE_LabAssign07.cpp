//Imani White, CSPD 221-0101, 3/27/19
//LAB 07 DISTANCE TRAVELED
//This program will take the speed (in mph) and hours traveled to determine distance

#include <iostream>
#include<limits>

using namespace std;


int main(){
	
	//Variable Declaration and Initailization
	int speed, time, count = 1;
	char choice = 'y';
	double distance;

	do {

		//Intro and Prompt
		cout << " This program will take the speed (in mph) \n and hours traveled to determine distance." << endl;
		cout << " Please enter your speed in MPH:";
		cin >> speed;

		//Input Validation
		while (true) {
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "That is not a valid input. Try Again." << endl;
				cin >> speed;
			}
			if (!cin.fail())
				break;
		}

		//Prompt
		cout << " Enter how many whole hours you have traveled:";
		cin >> time;

		//Input Validation
		while (true) {
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "That is not a valid input. Try Again." << endl;
				cin >> time;
			}
			if (!cin.fail())
				break;
		}

		//Table and Loop
		cout << "\n Hours    Distance Traveled" << endl;
		cout << " --------------------------" << endl;

		while (count <= time) {
			distance = speed * count;
			cout << " " << count << "              " << distance << endl;
			count++;
		}

		cout << "Would you like to do the program again?\nEnter y/n:";
		cin >> choice;
		choice = tolower(choice);

	} while (choice == 'y');

	return 0;
}