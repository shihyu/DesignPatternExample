#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_PANCAKE_HOUSE_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_PANCAKE_HOUSE_ITERATOR_HPP_

namespace HeadFirstDesignPatterns {
namespace Iterator {
namespace DinerMerger {

class PancakeHouseMenuIterator : public Iterator<MenuItem > {

	private: std::vector< MenuItem* > _items;
	private: mutable int _position;
 
	private: PancakeHouseMenuIterator( const PancakeHouseMenuIterator& ); // Disable copy constructor
	private: void operator=( const PancakeHouseMenuIterator& ); // Disable assignment operator

	public: PancakeHouseMenuIterator( std::vector< MenuItem* > items ) :
		_items( items ), _position( 0 ) {
	}
	public: MenuItem* next() const {
		MenuItem* menuItem = _items[_position];
		_position++;
		return menuItem;
	}
	public: bool hasNext() const {
		if( _position >= static_cast< int >( _items.size() ) ) {
			return false;
		} else {
			return true;
		}
	}
};

} // namespace DinerMerger
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
