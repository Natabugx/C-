#include<iostream> //input/output library: prewritten Code
using namespace std; //cheat code: makes iostream easier

void checkCarrots();

int main() {
	checkCarrots();
}

void checkCarrots() {
	int carrots;
	cout << "How many carrots" << endl;
	cin >> carrots;

	if (carrots > 3)
		cout << "Too many carrots!" << endl;
	else
		cout << "Not enough carrots" << endl;
}
