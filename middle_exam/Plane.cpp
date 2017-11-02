#pragma once 
#include"Plane.h"

Plane::Plane() {

}
Plane::~Plane() {

}
Plane::Plane(string name, string swing) :Vehicle(name) {
	this->swing = swing;
}

string Plane::get_swing() {
	return this->swing;
}

void Plane::run() {
	cout << this->get_name() << " is running and has " << this->swing << endl;
}