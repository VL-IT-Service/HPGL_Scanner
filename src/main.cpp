#include "plotter.hpp"
#include "hpglscanner.hpp"


int main (int argc, char* argv []){

	Plotter * p = new Plotter();

	HPGLScanner * s = new HPGLScanner(p);

	s->scanHPGLCode("IN;PU23,24;");
	
	return 0;
}
