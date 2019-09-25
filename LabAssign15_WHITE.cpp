//Imani White, CSPD 221-0101, 4/16/19
//Lab 15 - Spools

#include<iostream>
using namespace std;

const double SHIP = 10.00;
void getInfo(int&, int&, double&);
void displayInfo(int, int, double = SHIP);

int main()
{
	int incoming, there;
	double spOrder;

	getInfo(incoming, there, spOrder);
	displayInfo(incoming, there, spOrder);
	return 0;
}


void getInfo(int &order, int &stock, double &ship)
{
	char charge;
	cout << "How many spools were ordered?";
	cin >> order;
	while (order < 1)
	{
		cout << "Invaild. Enter spools ordered.";
		cin >> order;
	}

	cout << "How many spools are in stock?";
	cin >> stock;
	while (stock < 1)
	{
		cout << "Invaild. Enter spools in stock.";
		cin >> stock;
	}
	
	cout << "Are there special shipping charges? y/n";
	cin >> charge;
	if (charge == 'Y' || charge == 'y')
	{
		cout << "Enter amount:";
		cin >> ship;
		while (ship < 1)
		{
			cout << "Invaild. Enter shipping.";
			cin >> ship;
		}
	}
	else
		ship = 10.0;
}

void displayInfo(int order, int stock, double ship)
{
	cout << "Order Summary\n=============" << endl;
	cout << "Items Ordered:" << order << endl;
	cout << "Items Ready to Ship:" << stock << endl;
	if (order > stock)
	{
	  cout << "Backorder:" << (order - stock) << endl;
	}
	else
		cout << endl;

	cout << "Subtotal: $"<< (order*100.00) << endl;
	cout << "Total shipping charges: $"<< (ship*order) << endl;
	cout << "Total: $" << ((order*100.00) + (ship*order)) << endl;
}