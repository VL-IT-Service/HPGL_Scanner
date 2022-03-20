#include "hpglstate_ExpectNextX.hpp"
#include "hpglstate_X.hpp"
#include "hpglstate_Error.hpp"

		HPGLState_ExpectNextX::HPGLState_ExpectNextX (HPGLScanner * scanner) :HPGLState(scanner){}

		void HPGLState_ExpectNextX::scan(char code){
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
					this->scanner->setX(code-48);
					this->scanner->setState(new HPGLState_X(this->scanner));
				default:
					this->scanner->setState(new HPGLState_Error(this->scanner));	
			}
		}

