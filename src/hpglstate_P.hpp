#ifndef HPGLSTATE_P
#define HPGLSTATE_P

#include "hpglstate.hpp"
#include "hpglscanner.hpp"


using namespace std;

class HPGLState_P : public HPGLState {

	public:	
		HPGLState_P(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
