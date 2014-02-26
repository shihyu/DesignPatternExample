#ifndef	_HFDP_CPP_INTERPRETER_FLY_BEHAVIOR_HPP_
#define _HFDP_CPP_INTERPRETER_FLY_BEHAVIOR_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class FlyBehavior {

	public: virtual ~FlyBehavior() = 0 {
	};
	public: virtual void fly () const = 0;
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif