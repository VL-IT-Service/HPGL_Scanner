#include "hpglstate_Error.hpp"
#include "hpglstate_Start.hpp"

		HPGLState_Error::HPGLState_Error(HPGLScanner * scanner) :HPGLState(scanner) {
		}

		void HPGLState_Error::scan(char code){
			switch (code){
				case ';':
					this->scanner->setState(new HPGLState_Start(this->scanner));
			}
		}

