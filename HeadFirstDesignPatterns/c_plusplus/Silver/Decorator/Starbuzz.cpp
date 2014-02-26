#include "Starbuzz.hpp"

using namespace HeadFirstDesignPatterns::Decorator;

int main( int argc, char* argv[] ) {

	Beverage* beverage = new Espresso();
	std::cout.setf( std::ios::showpoint);
	std::cout.precision(3);
	std::cout << beverage->getDescription() 
			  << " $" 
			  << beverage->cost() 
			  << std::endl;

	Beverage* beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	std::cout << beverage2->getDescription() 
			  << " $" 
			  << beverage2->cost() 
			  << std::endl;

	Beverage* beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	std::cout << beverage3->getDescription() 
			  << " $" 
			  << beverage3->cost() 
			  << std::endl;

	delete beverage3;
	delete beverage2;
	delete beverage;

	return 0;
}

