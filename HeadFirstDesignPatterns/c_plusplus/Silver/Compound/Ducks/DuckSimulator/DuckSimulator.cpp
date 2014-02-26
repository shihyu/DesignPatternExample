#include "DuckSimulator.hpp"

using namespace HeadFirstDesignPatterns::Compound::Ducks;

void simulate( const Quackable* duck ) { assert( duck );
	duck->quack();
}

int main(int argc, char* argv[]) {

	std::auto_ptr< Quackable > mallardDuck( new MallardDuck() );
	std::auto_ptr< Quackable > redheadDuck( new RedheadDuck() );
	std::auto_ptr< Quackable > duckCall( new DuckCall() );
	std::auto_ptr< Quackable > rubberDuck( new RubberDuck() );
	
	std::cout << std::endl << "Duck Simulator" << std::endl;

	simulate( mallardDuck.get() );
	simulate( redheadDuck.get() );
	simulate( duckCall.get() );
	simulate( rubberDuck.get() );

	return 0;
}