#include<iostream> //input/output library: prewritten Code
using namespace std; //cheat code: makes iostream easier

void printBananas();

int main() {
	printBananas();
}

void printBananas() {
	for (int i = 0; i < 3; i++)
		cout << "Banana dance!" << endl;
}
