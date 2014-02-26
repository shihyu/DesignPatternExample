#ifndef	_HFDP_CPP_COMPOSITE_MENUS_WAITRESS_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_WAITRESS_HPP_

namespace HeadFirstDesignPatterns {
namespace Composite	 {
namespace Menus {

class Waitress {

	private: const MenuComponent* _allMenus;
 
	private: Waitress( const Waitress& ); // Disable copy constructor
	private: void operator=( const Waitress& ); // Disable assignment operator

	public: explicit Waitress( const MenuComponent* allMenus ) :
		_allMenus( allMenus ) { assert( allMenus );
	}
 	public: void printMenu() const {
		_allMenus->print();
	}
};

} // namespace Menus
} // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif

