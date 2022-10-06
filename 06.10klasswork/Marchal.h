#pragma once
#include "Transport.h"

class Marchal : public Transport {

public:
	void Print() {
		cout << "\n\nName of transport: " << name << endl;
		cout << "Average fuel consumption per 100 km: " << cons << endl;
		cout << "Maximal speed of transport: " << maxs << endl;
	}

};
