//Imani White, CSPD 221-0101, 3/14/19
//LAB 06
//This program will take the number of seconds (between 1 and 30)
//and caclculate how far the sound has travelled in that time through a certain gas

#include <iostream>
#include <cctype>

using namespace std;

int main() {

	const double SPEED_CO2 = 258.0;
	const double SPEED_AIR = 331.5;
	const double SPEED_He = 972.0;
	const double SPEED_H = 1270.0;

	const double MIN_SEC = 0.0;
	const double MAX_SEC = 30.0;

	double seconds, distance;
	char gas;

	cout << "This program will take the number of seconds (between 1 and 30)\n and calculae how far sound has travelled in that time through a certain gas.\n";
	cout << "Enter how many seconds: ";
	cin >> seconds;

	while (seconds < MIN_SEC || seconds > MAX_SEC) {
		cout << "That is an invalid input.\nTry entering a number between 0 and 30: ";
		cin >> seconds;
	}

	cout << "Choose the gas the sound is travelling through." << endl;
	cout << "<C> Carbon Dioxide" << endl;
	cout << "<A> Air" << endl;
	cout << "<H> Helium" << endl;
	cout << "<G> Hydrogen" << endl;
	cin >> gas;
	gas = toupper(gas);

	if (gas == 'C' || gas == 'A' || gas == 'H' || gas == 'G') {
	switch (gas) {
	case 'C':
		distance = SPEED_CO2 * seconds;
		cout << "The source of the sound was from " << distance << " meters away";
		break;
	case 'A':
		distance = SPEED_AIR * seconds;
		cout << "The source of the sound was from " << distance << " meters away";
		break;
	case 'H':
		distance = SPEED_He * seconds;
		cout << "The source of the sound was from " << distance << " meters away";
		break;
	case 'G':
		distance = SPEED_H * seconds;
		cout << "The source of the sound was from " << distance << " meters away";
		break;
	default:
		cout << "That is not valid";
		break;
	}
	}
	else
	{
		cout << "That is an invalid input.\nTry the letters C, A, H, or G:  ";
		cin >> gas;
		gas = toupper(gas);

		switch (gas) {
		case 'C':
			distance = SPEED_CO2 * seconds;
			cout << "The source of the sound was from " << distance << " meters away";
			break;
		case 'A':
			distance = SPEED_AIR * seconds;
			cout << "The source of the sound was from " << distance << " meters away";
			break;
		case 'H':
			distance = SPEED_He * seconds;
			cout << "The source of the sound was from " << distance << " meters away";
			break;
		case 'G':
			distance = SPEED_H * seconds;
			cout << "The source of the sound was from " << distance << " meters away";
			break;
		default:
			cout << "That is not valid";
			break;
		}
	}
}