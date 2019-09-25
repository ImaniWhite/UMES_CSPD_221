#include <iostream>
using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int test1, test2, test3, test4, test5;

	getScore(test1);
	getScore(test2);
	getScore(test3);
	getScore(test4);
	getScore(test5);

	calcAverage(test1, test2, test3, test4, test5);

	return 0;
}

void getScore(int &grade)
{
		cout << "Enter a test score: ";
		cin >> grade;

		while (grade < 0 || grade > 100)
		{
			cout << "Invaild entry. Try Again";
			cin >> grade;
		}
}

int findLowest(int grade1, int grade2, int grade3, int grade4, int grade5)
{
	if (grade1 < grade2 && grade1 < grade3 && grade1 < grade4 &&
		grade1 < grade5)
		return grade1;
	else if (grade2 < grade1 && grade2 < grade3 && grade2 < grade4 &&
		grade2 < grade5)
		return grade2;
	else if (grade3 < grade2 && grade3 < grade1 && grade3 < grade4 &&
		grade3 < grade5)
		return grade3;
	else if (grade4 < grade2 && grade4 < grade3 && grade4 < grade1 &&
		grade4 < grade5)
		return grade4;
	else
		return grade5;
}

void calcAverage(int Grade1, int Grade2, int Grade3, int Grade4, int Grade5)
{
	int Lowest;
	double avg;

	Lowest = findLowest(Grade1, Grade2, Grade3, Grade4, Grade5);

	if (Lowest == Grade1)
		avg = (Grade2 + Grade3 + Grade4 + Grade5) / 4;
	else if (Lowest == Grade2)
		avg = (Grade1 + Grade3 + Grade4 + Grade5) / 4;
	else if (Lowest == Grade3)
		avg = (Grade2 + Grade1 + Grade4 + Grade5) / 4;
	else if (Lowest == Grade4)
		avg = (Grade2 + Grade3 + Grade1 + Grade5) / 4;
	else
		avg = (Grade2 + Grade3 + Grade4 + Grade1) / 4;

	cout << "The average of the four highest scores is "<< avg << ".";
}