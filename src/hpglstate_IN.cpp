#include "hpglstate_Start.hpp"
#include "hpglstate_IN.hpp"
#include "hpglstate_Error.hpp"

		HPGLState_IN::HPGLState_IN(HPGLScanner * scanner) :HPGLState(scanner) {
		}

		void HPGLState_IN::scan(char code){
			switch (code){
				case ';':
					this->scanner->initialize();
					this->scanner->setState(new HPGLState_Start(this->scanner));
					break;
				default:
					this->scanner->setState(new HPGLState_Error(this->scanner));	
			}
		}

