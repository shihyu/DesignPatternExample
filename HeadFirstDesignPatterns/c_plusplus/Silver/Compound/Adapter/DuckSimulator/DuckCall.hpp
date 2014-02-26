#ifndef	_HFDP_CPP_COMPOUND_ADAPTER_DUCK_CALL_HPP_
#define _HFDP_CPP_COMPOUND_ADAPTER_DUCK_CALL_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Adapter {

class DuckCall : public Quackable {

	public: void quack() const {
		std::cout << "Kwak" << std::endl;
	}
};

} // namespace Adapter
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif