#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_MENU_ITEM_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_MENU_ITEM_HPP_

namespace HeadFirstDesignPatterns {
namespace Iterator {
namespace DinerMergerI {

class MenuItem {

	private: std::string _name;
	private: std::string _description;
	private: bool _vegetarian;
	private: double _price;
 
	private: MenuItem( const MenuItem& ); // Disable copy constructor
	private: void operator=( const MenuItem& ); // Disable assignment operator

	public: MenuItem( std::string name, std::string description, bool vegetarian, double price ) :
		_name( name ), _description( description ), _vegetarian( vegetarian ), _price( price ) {
	}
	public: std::string getName() {
		return _name;
	}
	public: std::string getDescription() {
		return _description;
	}
	public: double getPrice() {
		return _price;
	}
	public: bool isVegetarian() {
		return _vegetarian;
	}
	public: std::string toString() {
		std::stringstream value ( _name.c_str() );
		value << " $" << _price << std::endl << _description.c_str();
		return value.str();
	}
};

} // namespace DinerMergerI
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
