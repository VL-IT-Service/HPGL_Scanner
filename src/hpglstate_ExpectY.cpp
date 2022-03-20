#include "hpglstate_ExpectY.hpp"
#include "hpglstate_Y.hpp"
#include "hpglstate_Error.hpp"

		HPGLState_ExpectY::HPGLState_ExpectY(HPGLScanner * scanner) :HPGLState(scanner) {
		}

		void HPGLState_ExpectY::scan(char code){
			switch (code){
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
					this->scanner->setY(code-48);
					this->scanner->setState(new HPGLState_Y(this->scanner));
				default:
					this->scanner->setState(new HPGLState_Error(this->scanner));	
			}
		}

