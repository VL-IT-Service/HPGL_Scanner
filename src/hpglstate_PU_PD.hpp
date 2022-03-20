#ifndef HPGLSTATE_PU_PD
#define HPGLSTATE_PU_PD

#include "hpglstate.hpp"
#include "hpglscanner.hpp"


using namespace std;

class HPGLState_PU_PD : public HPGLState {

	public:	
		HPGLState_PU_PD(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
