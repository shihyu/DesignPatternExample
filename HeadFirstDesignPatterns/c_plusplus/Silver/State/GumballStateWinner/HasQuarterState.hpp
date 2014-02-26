#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_HAS_QUARTER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_HAS_QUARTER_STATE_HPP_

#include <process.h>

namespace HeadFirstDesignPatterns {
namespace State {
namespace GumballStateWinner {

class HasQuarterState : public State {

	private: int _random;
	private: GumballMachine* _gumballMachine;
 
	private: HasQuarterState( const HasQuarterState& ); // Disable copy constructor
	private: void operator=( const HasQuarterState& ); // Disable assignment operator

	public: explicit HasQuarterState( GumballMachine* gumballMachine ) :
		_gumballMachine( gumballMachine ), _random( 0 ) { assert( gumballMachine );
		srand( _getpid() );
	}
	public: void insertQuarter() const {
		std::cout << "You can't insert another quarter" << std::endl;
	}
	public: void ejectQuarter() const {
		std::cout << "Quarter returned" << std::endl;
		_gumballMachine->setState( _gumballMachine->getNoQuarterState() );
	}
	public: void turnCrank() const {
		std::cout << "You turned..." << std::endl;
		int winner = rand() % 5;
		if( ( winner == 0 ) && ( _gumballMachine->getCount() > 0 ) ) {
			_gumballMachine->setState( _gumballMachine->getWinnerState() );
		} else {
			_gumballMachine->setState( _gumballMachine->getSoldState() );
		}
	}
    public: void dispense() {
        std::cout << "No gumball dispensed" << std::endl;
    }
	public: std::string toString() const {
		return "waiting for turn of crank";
	}
};

} // namespace GumballStateWinner
} // namespace State
} // namespace HeadFirstDesignPatterns

#endif
