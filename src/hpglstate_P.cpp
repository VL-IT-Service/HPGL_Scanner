#include "hpglstate_P.hpp"
#include "hpglstate_PU_PD.hpp"
#include "hpglstate_Error.hpp"

		HPGLState_P::HPGLState_P(HPGLScanner * scanner) :HPGLState(scanner) {
		}

		void HPGLState_P::scan(char code){
			switch (code){
				case 'U':
					this->scanner->penUp();
					this->scanner->setState(new HPGLState_PU_PD(this->scanner));
					break;
				case 'D':
					this->scanner->penDown();
					this->scanner->setState(new HPGLState_PU_PD(this->scanner));
					break;
				default:
					this->scanner->setState(new HPGLState_Error(this->scanner));	
			}
		}

