#include "DinerMerger.hpp"

using namespace HeadFirstDesignPatterns::Iterator::DinerMerger;

int main( int argc, char* argv[] ) {

    std::auto_ptr< PancakeHouseMenu > pancakeHouseMenu( new PancakeHouseMenu() );
    std::auto_ptr< DinerMenu > dinerMenu( new DinerMenu() );
	std::auto_ptr< Waitress > waitress( new Waitress(pancakeHouseMenu.get(), dinerMenu.get() ) );

	waitress->printMenu();

	return 0;
}