#ifndef HPGLSTATE_START
#define HPGLSTATE_START

#include "hpglstate.hpp"
#include "hpglscanner.hpp"
#include "hpglstate_Start.hpp"


using namespace std;

class HPGLState_Start : public HPGLState {

	public:	
		HPGLState_Start(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
