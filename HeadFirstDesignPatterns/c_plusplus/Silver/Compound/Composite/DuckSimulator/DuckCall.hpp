#ifndef	_HFDP_CPP_COMPOUND_COMPOSITE_DUCK_CALL_HPP_
#define _HFDP_CPP_COMPOUND_COMPOSITE_DUCK_CALL_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Composite {

class DuckCall : public Quackable {

	public: void quack() const {
		std::cout << "Kwak" << std::endl;
	}
	public: std::string toString() const {
		return "Duck Call";
	}
};

} // namespace Composite
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif