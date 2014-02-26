#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_DINER_MENU_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_DINER_MENU_HPP_

namespace HeadFirstDesignPatterns {
namespace Iterator {
namespace DinerMergerI {

class DinerMenu : public Menu {
	private: static const int MAX_ITEMS = 6;
	private: int _numberOfItems;
	private: MenuItem** _menuItems;
  
	private: DinerMenu( const DinerMenu& ); // Disable copy constructor
    private: void operator=( const DinerMenu& ); // Disable assignment operator

	public: DinerMenu() :
		_numberOfItems( 0 ) {
		_menuItems = new MenuItem*[MAX_ITEMS + 1];	// added one additional entry;
		for( int i = 0; i <= MAX_ITEMS; i++ ) {		// to hold a null ( 0 ) value
			_menuItems[i] = 0;						// so hasNext() will work
		}
		addItem( "Vegetarian BLT","(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
		addItem( "BLT","Bacon with lettuce & tomato on whole wheat", false, 2.99);
		addItem( "Soup of the day","Soup of the day, with a side of potato salad", false, 3.29);
		addItem( "Hotdog","A hot dog, with saurkraut, relish, onions, topped with cheese",false, 3.05);
		addItem( "Steamed Veggies and Brown Rice","Steamed vegetables over brown rice", true, 3.99);
		addItem( "Pasta","Spaghetti with Marinara Sauce, and a slice of sourdough bread",true, 3.89);
	}
	public: void addItem( std::string name, std::string description, bool vegetarian, double price) {
		MenuItem* menuItem = new MenuItem(name, description, vegetarian, price);
		if( _numberOfItems >= MAX_ITEMS) {
			std::cerr << "Sorry, menu is full!  Can't add item to menu" << std::endl;
		} else {
			_menuItems[_numberOfItems] = menuItem;
			_numberOfItems++;
		}
	}
	public: MenuItem** getMenuItems() const {
		return _menuItems;
	}
	public: Iterator<MenuItem>* createIterator() const {
		return dynamic_cast< Iterator< MenuItem >* >( new DinerMenuIterator( _menuItems) );
	}
 
	// other menu methods here
};

} // namespace DinerMergerI
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif

