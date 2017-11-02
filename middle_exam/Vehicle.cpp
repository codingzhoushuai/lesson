#pragma once
#include "Vehicle.h"

void Vehicle::run() {
	cout << "vehicle run" << endl;
}
Vehicle::Vehicle() {

}
Vehicle::~Vehicle() {

}
Vehicle::Vehicle(string name) {
	this->name = name;
}

string Vehicle::get_name() {
	return this->name;
}