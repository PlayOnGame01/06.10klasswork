#pragma once
#include <iostream>
using namespace std;

class Transport {
protected:
	string name;
	double maxs;
	double oil;
	double cons;

public:
	void Consumption(int km) {
		cout << "Enter distance in km: ";
		cin >> km;

		cout << "Enter name: ";
		cin >> name;

		cout << "Enter fuel: ";
		cin >> oil;

		cout << "Enter maximal speed of transport: ";
		cin >> maxs;

		cons = oil / km * 100;
	}

	virtual void Print() = 0;

};