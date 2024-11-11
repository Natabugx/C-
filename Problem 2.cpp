#include<iostream> //input/output library: prewritten Code
using namespace std; //cheat code: makes iostream easier

void countSnails();

int main() {
	countSnails();
}

void countSnails() {
	int x = 0;
	while (x < 3) {
		cout << "Snail number " << x << endl;
		x++;
	}
}
