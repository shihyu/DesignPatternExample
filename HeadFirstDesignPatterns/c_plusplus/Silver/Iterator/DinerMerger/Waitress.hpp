#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_WAITRESS_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_WAITRESS_HPP_

namespace HeadFirstDesignPatterns {
namespace Iterator {
namespace DinerMerger {

class Waitress {
	PancakeHouseMenu* _pancakeHouseMenu;
	DinerMenu* _dinerMenu;
 
	private: Waitress( const Waitress& ); // Disable copy constructor
    private: void operator=( const Waitress& ); // Disable assignment operator

	public: Waitress(PancakeHouseMenu* pancakeHouseMenu, DinerMenu* dinerMenu) :
		_pancakeHouseMenu(pancakeHouseMenu), _dinerMenu(dinerMenu) {
	}
	public: void printMenu() {
		Iterator<MenuItem>* pancakeIterator = _pancakeHouseMenu->createIterator();
		Iterator<MenuItem>* dinerIterator = _dinerMenu->createIterator();

		std::cout << "MENU\n----\nBREAKFAST" << std::endl;
		printMenu(pancakeIterator);
		std::cout << "\nLUNCH" << std::endl;
		printMenu(dinerIterator);
	}
	private: void printMenu( Iterator<MenuItem>* iterator ) {
		while( iterator->hasNext() ) {
			MenuItem* menuItem = dynamic_cast< MenuItem* >( iterator->next() );
			std::cout << menuItem->getName() << ", ";
			std::cout << menuItem->getPrice() << " -- ";
			std::cout << menuItem->getDescription() << std::endl;
		}
	}
	public: void printVegetarianMenu() {
		printVegetarianMenu( _pancakeHouseMenu->createIterator() );
		printVegetarianMenu( _dinerMenu->createIterator() );
	} 
	public: bool isItemVegetarian( std::string name) {
		Iterator<MenuItem>* breakfastIterator = _pancakeHouseMenu->createIterator();
		if( isVegetarian(name, breakfastIterator) ) {
			return true;
		}
		Iterator<MenuItem>* dinnerIterator = _dinerMenu->createIterator();
		if( isVegetarian(name, dinnerIterator) ) {
			return true;
		}
		return false;
	}
	private: void printVegetarianMenu( Iterator<MenuItem>* iterator ) {
		while( iterator->hasNext() ) {
			MenuItem* menuItem = dynamic_cast< MenuItem* >( iterator->next() );
			if( menuItem->isVegetarian() ) {
				std::cout << menuItem->getName() << ", ";
				std::cout << menuItem->getPrice() << " -- ";
				std::cout << menuItem->getDescription() << std::endl;
			}
		}
	}
	private: bool isVegetarian( std::string name, Iterator<MenuItem>* iterator ) {
		while( iterator->hasNext() ) {
			MenuItem* menuItem = dynamic_cast< MenuItem* >( iterator->next() );
			if( menuItem->getName().compare( name ) == 0 ) {
				if( menuItem->isVegetarian() ) {
					return true;
				}
			}
		}
		return false;
	}
};

} // namespace DinerMerger
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif

