#ifndef HPGLSTATE_IN
#define HPGLSTATE_IN

#include "hpglstate.hpp"
#include "hpglscanner.hpp"


using namespace std;

class HPGLState_IN : public HPGLState {

	public:	
		HPGLState_IN(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
