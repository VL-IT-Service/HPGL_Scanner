#include "hpglstate_X.hpp"
#include "hpglstate_ExpectY.hpp"
#include "hpglstate_Error.hpp"

		HPGLState_X::HPGLState_X(HPGLScanner * scanner) :HPGLState(scanner) {
		}

		void HPGLState_X::scan(char code){
			switch (code){
				case ',':
					this->scanner->setState(new HPGLState_ExpectY(this->scanner));
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
					this->scanner->setX(this->scanner->getX()*10+code-48);
					break;
				default:
					this->scanner->setState(new HPGLState_Error(this->scanner));	
			}
		}

