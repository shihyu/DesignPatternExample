#ifndef	_HFDP_CPP_INTERPRETER_FAKE_QUACK_HPP_
#define _HFDP_CPP_INTERPRETER_FAKE_QUACK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class FakeQuack : public QuackBehavior {

	public:	void quack () const {
		std::cout << "Qwak" << std::endl;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif