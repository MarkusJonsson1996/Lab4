#include <iostream>
#include "motorVehicle.h"
#include "polyline.h"
#include "carddeck.h"

#define VEHICLES 2

using namespace std;

int main() {

	bool run = true;
	int task;
	string uIn;

	MotorVehicle myVehicle[VEHICLES];

	Point2d p1(1.0, 0.4);
	Point2d p2(2.4, 1.0);
	Point2d p3 = p2;
	Point2d p4 = p1 + p2;

	Polyline line1(4);

	Carddeck deck;

	while (run) {
		cout << "Enter the task to run (1-6), \"0\" to exit: ";
		cin >> task;

		switch (task) {
		
		case 0:
			run = false;
			break;

		case 1:

			for (int i = 0; i < VEHICLES; i++) {
				cout << endl << "VEHICLE: " << i << endl;
				vehicle_editor(myVehicle[i]);
			}

			for (int i = 0; i < VEHICLES; i++) {
				cout << "Car " << i << endl;
				myVehicle[i].print();
				cout << "------------" << endl;
			}

			break;
		
		case 2:
			cout << "point p3: " << p3.to_string() << endl;

			if (p3 == p1) cout << "p3 = p1" << endl;
			if (p3 == p2) cout << "p3 = p2" << endl;

			cout << p1.to_string() << endl;
			cout << "point p4: " << p4.to_string() << endl;
			cout << "length p4 -> p1: " << p4.len_to(p1) << endl;

			if (&p4 != &p1 && &p4 != &p2 && &p4 != &p3) cout << "p4 is a different Poin2d point" << endl;

			break;

		case 3:
			line1.append(p1);
			line1.append(p2);
			line1.append(p3);
			line1.append(p4);

			if (!line1.append(p4)) cout << "Line is full" << endl;

			cout << "Removing 2 points" << endl;
			for (int i = 0; i < 2; i++) line1.pop();

			if (line1.at(3) == nullptr) cout << "Point 3 is a nullptr" << endl;
			if (line1.at(6) == nullptr) cout << "Index out of range" << endl;

			if (!line1.is_empty()) cout << "Polyline contains " << line1.n_points() << " points" << endl;

			cout << "Polyline is " << line1.length() << " long" << endl;

			for (int i = 0; i < 2; i++) cout << "point " << i << " in polyline: " << line1.at(i)->to_string() << endl;

			break;

		case 4:

			for (int i = 0; i < 55; i++)
				cout << deck.deck[i].get_card() << endl;

			break;

		case 5:

			break;

		case 6:

			break;

		
		default:
			break;
		}
	
		cout << endl;

	}

	return 0;
}