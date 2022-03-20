#ifndef HPGLSTATE_X
#define HPGLSTATE_X

#include "hpglstate.hpp"
#include "hpglscanner.hpp"


using namespace std;

class HPGLState_X : public HPGLState {

	public:	
		HPGLState_X(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
