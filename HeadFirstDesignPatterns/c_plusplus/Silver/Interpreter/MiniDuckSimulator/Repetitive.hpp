#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_INTERPRETER_MINI_DUCK_SIMULATOR_REPETITIVE_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_INTERPRETER_MINI_DUCK_SIMULATOR_REPETITIVE_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class Repetitive : public Expression {

	protected: std::auto_ptr< Variable > _variable;

	public: Repetitive(
	public: virtual bool interpret( Context& context ) = 0;
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif