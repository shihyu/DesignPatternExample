#include "DinerMergerI.hpp"

using namespace HeadFirstDesignPatterns::Iterator::DinerMergerI;

int main( int argc, char* argv[] ) {

    std::auto_ptr< PancakeHouseMenu > pancakeHouseMenu( new PancakeHouseMenu() );
    std::auto_ptr< DinerMenu > dinerMenu( new DinerMenu() );

	std::auto_ptr< Waitress > waitress( new Waitress(pancakeHouseMenu.get(), dinerMenu.get() ) );

	waitress->printMenu();
	waitress->printVegetarianMenu();

	std::cout << "\nCustomer asks, is the Hotdog vegetarian?" << std::endl;
	std::cout << "Waitress says: ";
	if( waitress->isItemVegetarian( "Hotdog" ) ) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}
	std::cout << "\nCustomer asks, are the Waffles vegetarian?" << std::endl;
	std::cout << "Waitress says: ";
	if( waitress->isItemVegetarian( "Waffles" ) ) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}

	return 0;
}