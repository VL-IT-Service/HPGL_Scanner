#ifndef HPGLSTATE
#define HPGLSTATE

#include "hpglscanner.hpp"

using namespace std;

class HPGLState {

	public:	
		HPGLState(HPGLScanner * scanner);		

		void scan(char code);

		void setScanner(HPGLScanner *  scanner);

	private:
		HPGLScanner * scanner;

		
};

#endif
