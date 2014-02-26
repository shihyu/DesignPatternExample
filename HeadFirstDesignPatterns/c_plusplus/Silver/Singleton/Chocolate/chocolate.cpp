#include "Chocolate.hpp"

using namespace HeadFirstDesignPatterns::Factory::Singleton;

ChocolateBoiler* ChocolateBoiler::_uniqueInstance = 0;

int main( int argc, char* argv[] ) {

	ChocolateBoiler* boiler = ChocolateBoiler::getInstance();
	boiler->fill();
	boiler->boil();
	boiler->drain();

	// will return the existing instance
	ChocolateBoiler* boiler2 = ChocolateBoiler::getInstance();

	if( boiler == boiler2 )
		std::cout << "Got same boiler" << std::endl;
	else
		std::cout << "Oh oh! got a different boiler" << std::endl;

	return 0;
}