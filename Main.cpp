#include <iostream>
using namespace std;

int main() {
	string food = "Pizza";
	string* ptr = &food;
	string *ptr2 = &food;
	string * ptr3 = &food;
	string& ref = food;
	string &ref2 = food;

	cout << food << endl;
	cout << &food << endl;
	cout << ptr << endl;
	cout << ptr2 << endl;
	cout << ptr3 << endl;
	cout << *ptr << endl;
	cout << ref << endl;
	cout << ref2 << endl;

    return 0;
}