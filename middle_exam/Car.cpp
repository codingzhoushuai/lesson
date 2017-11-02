#pragma once 
#include"Car.h"

Car::Car() {

}
Car::~Car() {

}
Car::Car(string name, string swheel) :Vehicle(name) {
	this->swheel = swheel;
}

string Car::get_swheel() {
	return this->swheel;
}

void Car::run() {
	cout << this->get_name() << " is running and has " << this->swheel << endl;
}