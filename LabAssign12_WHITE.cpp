//Imani White, CSPD 221-0101, 4/16/19
//Lab 12 - Rectangle Function

#include <iostream>
using namespace std;

void getLength();
void getWidth();
double getArea(double, double);
void displayData(double, double, double);

double length = 0.0, width = 0.0, area = 0.0;
int main()
{
	getLength();
	getWidth();
	area = getArea(length, width);
	displayData(length, width, area);
	return 0;
}

void getLength()
{
	cout << "Please enter the length : ";
	cin >> length;

}
void getWidth()
{
	cout << "Please enter the width : ";
	cin >> width;
}

double getArea(double length, double width)
{
	double area = length * width;
	return area;
}

void displayData(double length, double width, double area)

{
	cout << "" << endl;
	cout << "Rectangle Data " << endl;
	cout << "------------------" << endl;
	cout << "Length : " << length << endl;
	cout << "Width :" << width << endl;
	cout << "Area : " << area << endl;
}