#include <iostream>
using namespace std;

int main() {
	int x = 20;
	int y = 20;
	if (x > y) {
		cout << "x is greater than y" << endl;
	}
	else if (x == y) {
		cout << "x is equal to y" << endl;
	}
	else {
		cout << "x is not greater than y" << endl;
	}
	return 0;
}