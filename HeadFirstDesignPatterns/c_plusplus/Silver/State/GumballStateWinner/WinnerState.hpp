#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_WINNER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_WINNER_STATE_HPP_

namespace HeadFirstDesignPatterns {
namespace State {
namespace GumballStateWinner {

class WinnerState : public State {

    private: GumballMachine* _gumballMachine;

	private: WinnerState( const WinnerState& ); // Disable copy constructor
	private: void operator=( const WinnerState& ); // Disable assignment operator
 
    public: explicit WinnerState( GumballMachine* gumballMachine ) :
		_gumballMachine( gumballMachine ) { assert( gumballMachine );
    }
	public: void insertQuarter() const {
		std::cout << "Please wait, we're already giving you a Gumball" << std::endl;
	}
	public: void ejectQuarter() const {
		std::cout << "Please wait, we're already giving you a Gumball" << std::endl;
	}
	public: void turnCrank() const {
		std::cout << "Turning again doesn't get you another gumball!" << std::endl;
	}
	public: void dispense() {
		std::cout << "YOU'RE A WINNER! You get two gumballs for your quarter" << std::endl;
		_gumballMachine->releaseBall();
		if( _gumballMachine->getCount() == 0 ) {
			_gumballMachine->setState( _gumballMachine->getSoldOutState() );
		} else {
			_gumballMachine->releaseBall();
			if( _gumballMachine->getCount() > 0 ) {
				_gumballMachine->setState( _gumballMachine->getNoQuarterState() );
			} else {
            	std::cout << "Oops, out of gumballs!" << std::endl;
				_gumballMachine->setState( _gumballMachine->getSoldOutState() );
			}
		}
	}
	public: std::string toString() const {
		return "despensing two gumballs for your quarter, because YOU'RE A WINNER!";
	}
};

} // namespace GumballStateWinner
} // namespace State
} // namespace HeadFirstDesignPatterns

#endif

