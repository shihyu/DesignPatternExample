#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_INTERPRETER_MINI_DUCK_SIMULATOR_NULL_COMMAND_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_INTERPRETER_MINI_DUCK_SIMULATOR_NULL_COMMAND_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class NullCommand : public Expression {

	private: std::string _value;

	public: bool accept( Visitor* visitor ) {
		return visitor->interpret( this );
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif