#ifndef HPGLSTATE_EXPECTY
#define HPGLSTATE_EXPECTY

#include "hpglstate.hpp"
#include "hpglscanner.hpp"


using namespace std;

class HPGLState_ExpectY : public HPGLState {

	public:
		HPGLState_ExpectY(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
