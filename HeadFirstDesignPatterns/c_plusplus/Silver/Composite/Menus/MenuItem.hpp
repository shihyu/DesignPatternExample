#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_ITEM_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_ITEM_HPP_

namespace HeadFirstDesignPatterns {
namespace Composite {
namespace Menus {

class MenuItem : public MenuComponent {

	private: std::string _name;
	private: std::string _description;
	private: bool _vegetarian;
	private: double _price;
 
	public: MenuItem( const std::string name, const std::string description, bool vegetarian, double price ) :
		_name( name ), _description( description ), _vegetarian( vegetarian ), _price( price ) {
	}
	public: std::string getName() const {
		return _name;
	}
	public: std::string getDescription() const {
		return _description;
	}
	public: double getPrice() const {
		return _price;
	}
	public: bool isVegetarian() const {
		return _vegetarian;
	}
	public: void print() const {
		std::cout << "  " << getName().c_str();
		if( isVegetarian() ) {
			std::cout << "(v)";
		}
		std::cout << ", " << getPrice() << std::endl;
		std::cout << "     -- " << getDescription().c_str() << std::endl;
	}
};

} // namespace Menus
} // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
