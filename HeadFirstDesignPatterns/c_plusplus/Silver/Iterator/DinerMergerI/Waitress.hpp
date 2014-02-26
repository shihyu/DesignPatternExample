#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_WAITRESS_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_WAITRESS_HPP_

namespace HeadFirstDesignPatterns {
namespace Iterator {
namespace DinerMergerI {

class Waitress{
     
	Menu* _pancakeHouseMenu;
	Menu* _dinerMenu;
 
	private: Waitress( const Waitress& ); // Disable copy constructor
	private: void operator=( const Waitress& ); // Disable assignment operator

	public: Waitress( Menu* pancakeHouseMenu, Menu* dinerMenu ) :
		_pancakeHouseMenu( pancakeHouseMenu ), _dinerMenu( dinerMenu ) { assert( pancakeHouseMenu ); assert( dinerMenu );
	}
	public: void printMenu() {
		Iterator<MenuItem>* pancakeIterator = _pancakeHouseMenu->createIterator();
		Iterator<MenuItem>* dinerIterator = _dinerMenu->createIterator();

		std::cout << "MENU\n----\nBREAKFAST" << std::endl;
		printMenu( pancakeIterator );
		std::cout << "\nLUNCH" << std::endl;
		printMenu( dinerIterator );
	}
	private: void printMenu( Iterator<MenuItem>* iterator ) { assert( iterator );
		while( iterator->hasNext() ) {
			MenuItem* menuItem = dynamic_cast< MenuItem* >( iterator->next() );
			std::cout << menuItem->getName() << ", ";
			std::cout << menuItem->getPrice() << " -- ";
			std::cout << menuItem->getDescription() << std::endl;
		}
	}
 	public: void printVegetarianMenu() {
		std::cout << "\nVEGETARIAN MENU\n----\nBREAKFAST" << std::endl;
		printVegetarianMenu( _pancakeHouseMenu->createIterator() );
		std::cout << "\nLUNCH" << std::endl;
		printVegetarianMenu( _dinerMenu->createIterator() );
	}
 	public: bool isItemVegetarian( std::string name ) {
		Iterator<MenuItem>* pancakeIterator = _pancakeHouseMenu->createIterator();
		if( isVegetarian(name, pancakeIterator) ) {
			return true;
		}
		Iterator<MenuItem>* dinerIterator = _dinerMenu->createIterator();
		if( isVegetarian(name, dinerIterator) ) {
			return true;
		}
		return false;
	}
	private: void printVegetarianMenu( Iterator<MenuItem>* iterator ) const { assert( iterator );
		while( iterator->hasNext() ) {
			MenuItem* menuItem = dynamic_cast< MenuItem* >(iterator->next() );
			if( menuItem->isVegetarian() ) {
				std::cout << menuItem->getName() << ", ";
				std::cout << menuItem->getPrice() << " -- ";
				std::cout << menuItem->getDescription() << std::endl;
			}
		}
	}
	private: bool isVegetarian( std::string name, Iterator<MenuItem>* iterator) const { assert(iterator);
		while( iterator->hasNext() ) {
			MenuItem* menuItem = iterator->next();
			if( menuItem->getName().compare( name ) == 0 ) {
				if( menuItem->isVegetarian() ) {
					return true;
				}
			}
		}
		return false;
	}
};

} // namespace DinerMergerI
} // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif

