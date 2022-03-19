#include "plotter.hpp"

#include <iostream>

using namespace std;

void Plotter::penUp(){
	cout << "Pen Up"<< endl;
}

void Plotter::penDown(){
	cout << "Pen Down"<< endl;
}

void Plotter::moveTo(int x, int y){
	cout << "Move to (" << x << "|" << y << ")"<< endl;
}

void Plotter::initialize(){
	cout << "Initialize" << endl;
}



