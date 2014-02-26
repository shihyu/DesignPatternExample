#include "GumballStateWinner.hpp"

using namespace HeadFirstDesignPatterns::State::GumballStateWinner;

//
// put here to resolve forward reference paradox where GumballMachine
// references State(s) and State references GumballMachine. Note, a 
// simple forward 'class' reference is not sufficient to resolve the
// circular (chicken&egg) paradox. Morever, since the intent is to 
// preserve as much of the original examples, this minor deviation is
// acceptable.
//
GumballMachine::GumballMachine(int numberGumballs) :

	_count( numberGumballs ) { assert( numberGumballs >= 0 );

	_soldOutState = new SoldOutState( this );
	_noQuarterState = new NoQuarterState( this );
	_hasQuarterState = new HasQuarterState( this );
	_soldState = new SoldState( this );
	_winnerState = new WinnerState( this );
	_state = _soldOutState;

	if( _count  > 0 ) {
		_state = _noQuarterState;
	} 
}

int main( int argc, char* argv[] ) {

	std::auto_ptr< GumballMachine > gumballMachine( new GumballMachine( 10 ) );
	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	return 0;
}