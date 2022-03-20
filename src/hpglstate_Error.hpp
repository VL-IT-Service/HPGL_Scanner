#ifndef HPGLSTATE_ERROR
#define HPGLSTATE_ERROR

#include "hpglstate.hpp"
#include "hpglscanner.hpp"


using namespace std;

class HPGLState_Error : public HPGLState {

	public:	
		HPGLState_Error(HPGLScanner * scanner);
		void scan(char code);

		
};

#endif
