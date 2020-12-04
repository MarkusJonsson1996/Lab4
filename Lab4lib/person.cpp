#include "person.h"
#include <iostream>

using namespace std;

Person::Person() {
	adress = "no adress";
	name = "no name";
	allowedToDrive = false;
}
Person::Person(string newName, string newAdress, bool isAllowedToDrive) {
	
	adress = newAdress;
	name = newName;
	allowedToDrive = isAllowedToDrive;

}
void Person::print() {
	cout << "Name: " << name << endl;
	cout << "Adress: " << adress << endl;
	cout << "Allowed to drive: ";

	if (allowedToDrive) cout << "Yes" << endl;
	else cout << "No" << endl;
}