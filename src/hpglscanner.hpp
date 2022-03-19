#ifndef HPGLSCANNER
#define HPGLSCANNER

#include <string>
#include "plotter.hpp"
#include "hpglstate.hpp"

using namespace std;

class HPGLScanner {

	public:	
		HPGLScanner(Plotter plotter);		

		void scanHPGLCode(string code);

		void setState(HPGLState state);

	private:
		int x;

		int y;

		HPGLState state;
		
		Plotter plotter;

		void penUp();

		void penDown();

		void moveTo(int x, int y);

		void initialize();
	
}

#endif
