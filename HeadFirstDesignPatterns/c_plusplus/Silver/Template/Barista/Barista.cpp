#include "Barista.hpp"

using namespace HeadFirstDesignPatterns::Template::Barista;

int main( int argc, char* argv[] ) {

	std::auto_ptr< Tea > tea( new Tea() );
	std::auto_ptr< Coffee > coffee( new Coffee() );

	std::cout << std::endl << "Making tea..." << std::endl;
	tea->prepareRecipe();
 
	std::cout << std::endl << "Making coffee..." << std::endl;
	coffee->prepareRecipe();

	std::auto_ptr< TeaWithHook > teaHook( new TeaWithHook() );
	std::auto_ptr< CoffeeWithHook > coffeeHook( new CoffeeWithHook() );

	std::cout << std::endl << "Making tea..."<< std::endl;
	teaHook->prepareRecipe();

	std::cout << std::endl << "Making coffee..."<< std::endl;
	coffeeHook->prepareRecipe();

	return 0;
}