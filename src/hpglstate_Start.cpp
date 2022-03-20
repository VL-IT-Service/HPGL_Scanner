#include "hpglstate_Start.hpp"
#include "hpglstate_I.hpp"
#include "hpglstate_P.hpp"
#include "hpglstate_Error.hpp"


		HPGLState_Start::HPGLState_Start(HPGLScanner * scanner) :HPGLState(scanner) {
		}

		void HPGLState_Start::scan(char code){
			switch (code){
				case 'I':
					this->scanner->setState(new HPGLState_I(this->scanner));
					break;
				case 'P':
					this->scanner->setState(new HPGLState_P(this->scanner));
					break;
				default:
					this->scanner->setState(new HPGLState_Error(this->scanner));	
			}
		}

