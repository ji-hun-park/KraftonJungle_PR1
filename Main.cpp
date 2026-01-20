#include <iostream>
using namespace std;

int main() {
	struct car
	{
		int year;
		string brand;
		string model;
	};

	car myCar1;
	car myCar2;
	car myCar3;

	int i;
	string s1, s2;

	myCar1.year = 1999;
	myCar1.brand = "BMW";
	myCar1.model = "X5";

	myCar2.year = 1969;
	myCar2.brand = "Ford";
	myCar2.model = "Mustang";

	cin >> i;
	cin >> s1;
	cin >> s2;
	myCar3.year = i;
	myCar3.brand = s1;
	myCar3.model = s2;

	cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << endl;
	//cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

	return 0;
}