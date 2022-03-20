#include "hpglscanner.hpp"
#include "hpglstate.hpp"
#include "hpglstate_Start.hpp"

#include <cctype>

#include <iostream>

using namespace std;

HPGLScanner::HPGLScanner(Plotter * plotter){
	this->plotter = plotter;
	this->state = new HPGLState_Start(this);
	this->x = 0;
	this->y = 0;
};

void HPGLScanner::scanHPGLCode(string code){
	int index = 0;
	while (index < code.length()){
		this->state->scan(toupper(code[index]));
		index++;
	}
}

void HPGLScanner::setState(HPGLState * state){
	delete(this->state);
	this->state = state;
}

void HPGLScanner::penUp(){
	this->plotter->penUp();
}

void HPGLScanner::penDown(){
	this->plotter->penDown();
}

void HPGLScanner::moveTo(){
	this->plotter->moveTo(this->x,this->y);
}

void HPGLScanner::initialize(){
	this->plotter->initialize();
}

void HPGLScanner::setX(int x){
	this->x = x;
}

void HPGLScanner::setY(int y){
	this->y = y;
}

int HPGLScanner::getX(){
	return this->x;
}

int HPGLScanner::getY(){
	return this->y;
}



