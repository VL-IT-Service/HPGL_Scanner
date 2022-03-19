#include "hpglstate.hpp"

		HPGLState::HPGLState(HPGLScanner * scanner){
			this->scanner = scanner;
		}		

		void HPGLState::scan(char code){
			// do nothing for now
			this->scanner->initialize();
			this->scanner->penUp();
			this->scanner->penDown();
			this->scanner->setX(12);
			this->scanner->setY(99);
			this->scanner->moveTo();
			
		}

		void HPGLState::setScanner(HPGLScanner * scanner){
			this->scanner = scanner;
		}
