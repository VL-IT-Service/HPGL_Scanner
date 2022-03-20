#ifndef HPGLSTATE_EXPECTNEXTX
#define HPGLSTATE_EXPECTNEXTX

#include "hpglstate.hpp"
#include "hpglscanner.hpp"


using namespace std;

class HPGLState_ExpectNextX : public HPGLState {

	public:	
		HPGLState_ExpectNextX(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
