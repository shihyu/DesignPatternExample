#ifndef	_HFDP_CPP_INTERPRETER_SQUEAK_HPP_
#define _HFDP_CPP_INTERPRETER_SQUEAK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class Squeak : public QuackBehavior {

	public:	void quack () const {
		std::cout << "Squeak" << std::endl;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif