#ifndef	_HFDP_CPP_COMPOUND_DUCKS_DUCK_CALL_HPP_
#define _HFDP_CPP_COMPOUND_DUCKS_DUCK_CALL_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Ducks {

class DuckCall : public Quackable {

	public: void quack() const {
		std::cout << "Kwak" << std::endl;
	}
};

} // namespace Ducks
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif