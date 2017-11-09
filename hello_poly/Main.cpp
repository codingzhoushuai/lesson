/*多态*/
#pragma once      
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"
using namespace std;

void run_Vehicle(Vehicle* v)
{
	v->run();
}

void run_Vehicle(Vehicle* v[])
{
	for (int i =0 ;i</*sizeof(v)/sizeof(Vehicle*)*/6;i++)
	{ 
		v[i]->run(); 
	}
}


int main() {

	/*Vehicle v;
	v.run();*/

	//Car c;
	//c.run();

	//Plane p;
	//p.run();

	Car *c1 = new Car();
	Plane *p1 = new Plane();
	Car *c2 = new Car();
	Plane *p2 = new Plane();
	Car *c3 = new Car();
	Plane *p3 = new Plane();
	
	Vehicle* va[] = { c1,p1,c2,p2,c3,p3 };
	run_Vehicle(va);

	/*Vehicle *m = new Car();
	m->run();
	delete m;

	Vehicle *n = new Plane();
	n->run();
	delete n;  */              //这里的Vehicle实现的是接口的作用

	cin.get();
}


