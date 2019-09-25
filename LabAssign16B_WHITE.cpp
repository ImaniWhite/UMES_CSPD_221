#include <iostream>
using namespace std;

const int SIZE = 5;
int score[SIZE];
void getScore(int[], int);
int findLowest(const int[]);
void calcAverage(const int[]);

int main() {
	getScore(score, SIZE);
	calcAverage(score);
	return 0;
}

void getScore(int score[], int size){
	for (int x = 0; x < SIZE; x++){
		cout << "Enter score a score for test"<<x;
		cin >> score[x];
		while (score[x] < 0 || score[x]>100){
			cout << "\nInvaild entry. Try again.";
			cin >> score[x];
		}
	}
}

int findLowest(int score[]){
	int small = 2147483647;
	for (int x = 0; x < SIZE; x++){
		small = score[x] < small ? score[x] : small;
	}
	return small;
}

void calcAverage(int score[]){
	int lowest = findLowest(score);
	double average = 0;

	for (int x = 0; x < SIZE; x++) {
		average += score[x];
	}

	average -= lowest;
	average /= 4;

	cout << "\nAverage of the four highest scores are: " << average << endl;
}