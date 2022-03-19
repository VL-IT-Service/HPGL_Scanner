#ifndef HPGLSCANNER
#define HPGLSCANNER

#include <string>
#include "plotter.hpp"


using namespace std;
class HPGLState;

class HPGLScanner {

	public:	
		HPGLScanner(Plotter * plotter);		

		void scanHPGLCode(string code);

		void setState(HPGLState * state);

		void setX(int x);

		void setY(int y);

		void penUp();

		void penDown();

		void moveTo();

		void initialize();

	private:
		int x;

		int y;

		HPGLState * state;
		
		Plotter * plotter;


	
};

#endif
