#include "DuckSimulator.hpp"

using namespace HeadFirstDesignPatterns::Compound::Decorator;

int QuackCounter::_numberOfQuacks( 0 );

void simulate( const Quackable* duck ) { assert( duck );
	duck->quack();
}

int main(int argc, char* argv[]) {

	std::auto_ptr< Quackable > mallardDuck( new QuackCounter( new MallardDuck() ) );
	std::auto_ptr< Quackable > redheadDuck( new QuackCounter( new RedheadDuck() ) );
	std::auto_ptr< Quackable > duckCall( new QuackCounter( new DuckCall() ) );
	std::auto_ptr< Quackable > rubberDuck( new QuackCounter( new RubberDuck() ) );
	std::auto_ptr< Quackable > gooseDuck( new GooseAdapter( new Goose() ) );

	std::cout << std::endl << "Duck Simulator: With Decorator" << std::endl;

	simulate(mallardDuck.get() );
	simulate(redheadDuck.get() );
	simulate( duckCall.get() );
	simulate(rubberDuck.get() );
	simulate( gooseDuck.get() );

	std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << std::endl;

	return 0;
}