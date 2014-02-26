#ifndef	_HFDP_CPP_INTERPRETER_QUACK_BEHAVIOR_HPP_
#define _HFDP_CPP_INTERPRETER_QUACK_BEHAVIOR_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class QuackBehavior {

	public: virtual ~QuackBehavior() = 0 {
	};
	public: virtual void quack() const = 0;
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif