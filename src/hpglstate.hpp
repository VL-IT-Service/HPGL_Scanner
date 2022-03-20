#ifndef HPGLSTATE
#define HPGLSTATE

#include "hpglscanner.hpp"

using namespace std;

class HPGLState {

	public:	
		HPGLState(HPGLScanner * scanner);		

		virtual void scan(char code) = 0;

		void setScanner(HPGLScanner *  scanner);

	protected:
		HPGLScanner * scanner;

		
};

#endif
