#include <iostream>
using namespace std;

int main() {
	string firstName, lastName;
	firstName = "John";
	lastName = "Doe";
	string fullName = firstName.append(" ").append(lastName);
	cout << fullName << endl;
	return 0;
}