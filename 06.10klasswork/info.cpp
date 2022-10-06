#include <iostream>
#include "Transport.h"
#include "Plane.h"
#include "Car.h"
#include "Bike.h"
#include "Boat.h"
#include "Marchal.h"
using namespace std;


int main() {
	Transport* ptr = nullptr;
	int a;
	cout << "1. Plane\n2. Bike\n3. Car\n4. Boat\n5. Marchal\n->: ";
	cin >> a;
	switch (a) {
	case 1:
		ptr = new Plane();
		break;
	case 2:
		ptr = new Bike();
		break;
	case 3:
		ptr = new Car();
		break;
	case 4:
		ptr = new Boat();
		break;
	case 5:
		ptr = new Marchal();
		break;
	}
	ptr->Consumption(0);
	ptr->Print();
	delete ptr;

}