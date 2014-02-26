#include "AutoHouse.hpp"

using namespace HeadFirstDesignPatterns::Mediator::AutoHouse;

// The 'Mediator' pattern is discussed on page 622 in 'Head First Design Patterns'.
//
// As always, my intent is to implement the example as described in the book; however,
// there are some embellishments: WeatherStation and automation.
//
// The WeatherStation knows if it is raining and automation is accomplished by two
// variables: 'interval' and 'iterations' specifying the length of a virtual day
// and the number of days to simulate respectively. The default is a simulated
// (yet accelerated) 24 hour day that runs for a simulated week. 
//
// You can override these values with command-line parameters.

unsigned long interval = 12;	// length of day (in seconds)
unsigned long iterations = 7;	// number of days to simulate

int main( int argc, char* argv[] ) {

	if( argc > 1 ) {	// argument[1]=length of day (in seconds)
		std::stringstream( argv[1] ) >> interval;
	}
	if( argc > 2 ) {	// argument[2]=number of days
		std::stringstream( argv[2] ) >> iterations;
	}

	// TODO: Mediator could/should be implemented as a 'Singleton'
	std::auto_ptr< Mediator > mediator( new Mediator( iterations ) );

	mediator->on( interval );

	return 0;
}