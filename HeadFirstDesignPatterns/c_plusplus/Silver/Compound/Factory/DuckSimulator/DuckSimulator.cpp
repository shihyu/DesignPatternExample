#include "DuckSimulator.hpp"

using namespace HeadFirstDesignPatterns::Compound::Factory;

int QuackCounter::_numberOfQuacks = 0;

void simulate( const Quackable* duck ) {
	duck->quack();
}

int main(int argc, char* argv[]) {

	std::auto_ptr< AbstractDuckFactory > duckFactory( new CountingDuckFactory() );

	std::auto_ptr< Quackable > mallardDuck( duckFactory->createMallardDuck() );
	std::auto_ptr< Quackable > redheadDuck( duckFactory->createRedheadDuck() );
	std::auto_ptr< Quackable > duckCall( duckFactory->createDuckCall() );
	std::auto_ptr< Quackable > rubberDuck( duckFactory->createRubberDuck() );
	std::auto_ptr< Quackable > gooseDuck( new GooseAdapter( new Goose() ) );

	std::cout << std::endl << "Duck Simulator: With Abstract Factory" << std::endl;

	simulate( mallardDuck.get() );
	simulate( redheadDuck.get() );
	simulate( duckCall.get() );
	simulate( rubberDuck.get() );
	simulate( gooseDuck.get() );

	std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << std::endl;

	return 0;
}
