#pragma once
#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"

void run_vehicle(Vehicle* v) {
	v->run();
}

int main() {
	Plane* p = new Plane("plane", "wing");
	run_vehicle(p);

	cout << endl;

	Car* c = new Car("car", "swheel");
	run_vehicle(c);

	cin.get();
}