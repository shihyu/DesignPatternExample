#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_EXPRESSION_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_EXPRESSION_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class Visitor;

class Expression {
	public: virtual ~Expression() = 0 {
	};
	public: virtual void accept( Visitor* visitor) = 0;
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif