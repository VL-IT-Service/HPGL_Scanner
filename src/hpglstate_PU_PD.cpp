#include "hpglstate_PU_PD.hpp"
#include "hpglstate_X.hpp"
#include "hpglstate_Start.hpp"
#include "hpglstate_Error.hpp"

		HPGLState_PU_PD::HPGLState_PU_PD(HPGLScanner * scanner) :HPGLState(scanner) {
		}

		void HPGLState_PU_PD::scan(char code){
			switch (code){
				case ';':
					this->scanner->setState(new HPGLState_Start(this->scanner));
					break;
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					this->scanner->setX(code-48);
					this->scanner->setState(new HPGLState_X(this->scanner));
				default:
					this->scanner->setState(new HPGLState_Error(this->scanner));	
			}
		}

