#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_ITERATOR_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_ITERATOR_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

template <class T>
class Iterator {
	public: virtual ~Iterator() = 0 {
	}
	public: virtual T* next()  = 0;
};

} // namespace MiniDuckSimulator
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif