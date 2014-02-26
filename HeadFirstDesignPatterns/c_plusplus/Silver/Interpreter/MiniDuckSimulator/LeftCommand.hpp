#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_LEFT_COMMAND_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_LEFT_COMMAND_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class LeftCommand : public Expression {
	private: ~LeftCommand() { // disable inheritance
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		visitor->interpret( this );
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif