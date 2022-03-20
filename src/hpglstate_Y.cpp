#include "hpglstate_Y.hpp"
#include "hpglstate_ExpectNextX.hpp"
#include "hpglstate_Start.hpp"
#include "hpglstate_Error.hpp"

		HPGLState_Y::HPGLState_Y(HPGLScanner * scanner) :HPGLState(scanner) {
		}

		void HPGLState_Y::scan(char code){
			switch (code){
				case ',':
					this->scanner->moveTo();
					this->scanner->setState(new HPGLState_ExpectNextX(this->scanner));
					break;
				case ';':
					this->scanner->moveTo();
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
					this->scanner->setY(this->scanner->getY()*10+code-48);
					break;
				default:
					this->scanner->setState(new HPGLState_Error(this->scanner));	
			}
		}

