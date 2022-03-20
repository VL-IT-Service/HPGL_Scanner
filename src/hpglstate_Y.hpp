#ifndef HPGLSTATE_Y
#define HPGLSTATE_Y

#include "hpglstate.hpp"
#include "hpglscanner.hpp"


using namespace std;

class HPGLState_Y : public HPGLState {

	public:	
		HPGLState_Y(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
