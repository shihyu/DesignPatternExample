#ifndef	_HFDP_CPP_COMPOUND_ADAPTER_QUACKABLE_HPP_
#define _HFDP_CPP_COMPOUND_ADAPTER_QUACKABLE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Adapter {

class Quackable {

	public: virtual ~Quackable() = 0 {
	}
	public: virtual void quack() const = 0;
};

} // namespace Adapter
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif