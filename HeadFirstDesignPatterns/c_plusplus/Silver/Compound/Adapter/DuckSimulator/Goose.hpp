#ifndef	_HFDP_CPP_COMPOUND_ADAPTER_GOOSE_HPP_
#define _HFDP_CPP_COMPOUND_ADAPTER_GOOSE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Adapter {

class Goose {

	public: void honk() {
		std::cout << "Honk" << std::endl;
	}
};

} // namespace Adapter
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif