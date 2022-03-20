#include "hpglstate_I.hpp"
#include "hpglstate_IN.hpp"
#include "hpglstate_Error.hpp"

		HPGLState_I::HPGLState_I(HPGLScanner * scanner) :HPGLState(scanner) {
		}

		void HPGLState_I::scan(char code){
			switch (code){
				case 'N':
					this->scanner->setState(new HPGLState_IN(this->scanner));
					break;
				default:
					this->scanner->setState(new HPGLState_Error(this->scanner));	
			}
		}

