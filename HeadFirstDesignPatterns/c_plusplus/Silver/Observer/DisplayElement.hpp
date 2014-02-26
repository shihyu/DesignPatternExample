#ifndef	_HFDP_CPP_OBSERVER_DISPLAY_ELEMENT_HPP_
#define _HFDP_CPP_OBSERVER_DISPLAY_ELEMENT_HPP_

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
namespace Observer {

class DisplayElement {
	public: virtual void display() const = 0;
	protected: virtual ~DisplayElement() = 0 {
	};
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif