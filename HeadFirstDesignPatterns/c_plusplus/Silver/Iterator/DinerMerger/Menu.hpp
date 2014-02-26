#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_MENU_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_MENU_HPP_

namespace HeadFirstDesignPatterns {
namespace Iterator {
namespace DinerMerger {

class Menu {

	public: virtual ~Menu() = 0 {
	}
	public: virtual Iterator<MenuItem>* createIterator() const = 0;
};

} // namespace DinerMerger
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif