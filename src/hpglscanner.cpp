#include "hpglscanner.hpp"

#include <cctype>

using namespace std;

HPGLScanner::HPGLScanner(Plotter plotter){
	this.plotter = plotter;
	this.state = new HPGLState_Start();
	this.x = 0;
	this.y = 0;
};

void HPGLScanner::scanHPGLCode(string code){
	code = code.uppercase()
	int index = 0;
	while (index < code.length()){
		state.scan(toupper(code[index]));
		index++;
	}
}

void HPGLScanner::setState(HPGLState state){
	this.state = state;
}

void HPGLScanner::penUp(){
	this.plotter.penUp();
}

void HPGLScanner::penDown(){
	this.plotter.penDown();
}

void HPGLScanner::moveTo(int x, int y){
	this.plotter.moveTo(x,y);
}

void HPGLScanner::initialize(){
	this.plotter.initialize();
}



