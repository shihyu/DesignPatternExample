#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_NO_QUARTER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_NO_QUARTER_STATE_HPP_

namespace HeadFirstDesignPatterns {
namespace State {
namespace GumballStateWinner {

class NoQuarterState : public State {

    private: GumballMachine* _gumballMachine;
 
	private: NoQuarterState( const NoQuarterState& ); // Disable copy constructor
	private: void operator=( const NoQuarterState& ); // Disable assignment operator

    public: explicit NoQuarterState( GumballMachine* gumballMachine ) :
		_gumballMachine( gumballMachine ) { assert( gumballMachine );
    }
	public: void insertQuarter() const {
		std::cout << "You inserted a quarter" << std::endl;
		_gumballMachine->setState( _gumballMachine->getHasQuarterState() );
	}
	public: void ejectQuarter() const {
		std::cout << "You haven't inserted a quarter" << std::endl;
	}
	public: void turnCrank() const {
		std::cout << "You turned, but there's no quarter" << std::endl;
	}
	public: void dispense() {
		std::cout << "You need to pay first" << std::endl;
	} 
	public: std::string toString() const {
		return "waiting for quarter";
	}
};

} // namespace GumballSateWinner
} // namespace State
} // namespace HeadFirstDesignPatterns

#endif

