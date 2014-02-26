#ifndef	_HFDP_CPP_COMPOUND_FACTORY_GOOSE_HPP_
#define _HFDP_CPP_COMPOUND_FACTORY_GOOSE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Factory {

class Goose {

	public: void honk() const {
		std::cout << "Honk" << std::endl;
	}
	public: std::string toString() const {
		return "Goose";
	}
};

} // namespace Factory
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif