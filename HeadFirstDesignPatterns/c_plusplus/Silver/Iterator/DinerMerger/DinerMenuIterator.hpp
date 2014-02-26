#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_MENU_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_MENU_ITERATOR_HPP_

namespace HeadFirstDesignPatterns {
namespace Iterator {
namespace DinerMerger {

class DinerMenuIterator : public Iterator< MenuItem > {

	private: MenuItem** _items;
	private: mutable int _position;

	private: DinerMenuIterator( const DinerMenuIterator& ); // Disable copy constructor
	private: void operator=( const DinerMenuIterator& ); // Disable assignment operator

	public: explicit DinerMenuIterator( MenuItem** items ) :
		_items( items ), _position( 0 ) {
	}
	public: MenuItem* next() const {
		MenuItem* menuItem = _items[_position];
		_position++;
		return menuItem;
	}
	public: bool hasNext() const {
		bool value = true;
		if( _items[_position] == 0 ) {
			value = false;
		}
		return value;
	}
};

} // namespace DinerMerger
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif