#ifndef	_HFDP_CPP_COMPOUND_OBSERVER_GOOSE_HPP_
#define _HFDP_CPP_COMPOUND_OBSERVER_GOOSE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Observer {

class Goose {

	public: void honk() {
		std::cout << "Honk" << std::endl;
	}
	public: std::string toString() const {
		return "Goose";
	}
};

} // namespace Observer
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif