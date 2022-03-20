#ifndef HPGLSTATE_I
#define HPGLSTATE_I

#include "hpglstate.hpp"
#include "hpglscanner.hpp"


using namespace std;

class HPGLState_I : public HPGLState {

	public:	
		HPGLState_I(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
