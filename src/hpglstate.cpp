#include "hpglstate.hpp"

		HPGLState::HPGLState(HPGLScanner * scanner){
			this->scanner = scanner;
		}		

		void HPGLState::setScanner(HPGLScanner * scanner){
			this->scanner = scanner;
		}
