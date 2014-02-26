#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_INTERPRETER_MINI_DUCK_SIMULATOR_END_COMMAND_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_INTERPRETER_MINI_DUCK_SIMULATOR_END_COMMAND_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class EndCommand : public Expression {

	public: virtual bool interpret( Context& context ) {
		return true;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif