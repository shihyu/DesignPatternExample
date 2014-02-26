#ifndef	_HFDP_CPP_COMPOUND_COMPOSITE_GOOSE_HPP_
#define _HFDP_CPP_COMPOUND_COMPOSITE_GOOSE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Composite {

class Goose {

	public: void honk() {
		std::cout << "Honk" << std::endl;
	}
	public: std::string toString() const {
		return "Goose";
	}
};

} // namespace Composite
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif