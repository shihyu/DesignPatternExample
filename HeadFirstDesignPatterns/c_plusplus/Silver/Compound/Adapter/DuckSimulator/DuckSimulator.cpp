#include "DuckSimulator.hpp"

using namespace HeadFirstDesignPatterns::Compound::Adapter;

void simulate( const Quackable* duck ) { assert( duck );
	duck->quack();
}

int main( int argc, char* argv[] ) {

	std::auto_ptr< Quackable > mallardDuck( new MallardDuck() );
	std::auto_ptr< Quackable > redheadDuck( new RedheadDuck() );
	std::auto_ptr< Quackable > duckCall( new DuckCall() );
	std::auto_ptr< Quackable > rubberDuck( new RubberDuck() );
	std::auto_ptr< Quackable > gooseDuck( new GooseAdapter( new Goose() ) );

	std::cout << std::endl << "Duck Simulator: With Goose Adapter" << std::endl;

	simulate( mallardDuck.get() );
	simulate( redheadDuck.get() );
	simulate( duckCall.get() );
	simulate( rubberDuck.get() );
	simulate( gooseDuck.get() );

	return 0;
}