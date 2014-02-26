#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_

namespace HeadFirstDesignPatterns {
namespace State {
namespace GumballStateWinner {

class SoldState : public State {

    private: GumballMachine* _gumballMachine;
 
	private: SoldState( const SoldState& ); // Disable copy constructor
	private: void operator=( const SoldState& ); // Disable assignment operator

    public: explicit SoldState( GumballMachine* gumballMachine ) :
		_gumballMachine( gumballMachine ) { assert( gumballMachine );
    }
	public: void insertQuarter() const {
		std::cout << "Please wait, we're already giving you a gumball" << std::endl;
	}
	public: void ejectQuarter() const {
		std::cout << "Sorry, you already turned the crank" << std::endl;
	}
	public: void turnCrank() const {
		std::cout << "Turning twice doesn't get you another gumball!" << std::endl;
	}
	public: void dispense() {
		_gumballMachine->releaseBall();
		if( _gumballMachine->getCount() > 0) {
			_gumballMachine->setState( _gumballMachine->getNoQuarterState() );
		} else {
			std::cout << "Oops, out of gumballs!" << std::endl;
			_gumballMachine->setState( _gumballMachine->getSoldOutState() );
		}
	}
	public: std::string toString() const {
		return "dispensing a gumball";
	}
};

} // namespace GumballStateWinner
} // namespace State
} // namespace HeadFirstDesignPatterns

#endif

