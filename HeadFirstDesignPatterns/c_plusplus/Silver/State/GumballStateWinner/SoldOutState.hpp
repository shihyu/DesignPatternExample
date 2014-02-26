#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_OUT_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_OUT_STATE_HPP_

namespace HeadFirstDesignPatterns {
namespace State {
namespace GumballStateWinner {

class SoldOutState : public State {
    private: GumballMachine* _gumballMachine;
 
	private: SoldOutState( const SoldOutState& ); // Disable copy constructor
	private: void operator=( const SoldOutState& ); // Disable assignment operator

    public: explicit SoldOutState(GumballMachine* gumballMachine ) :
		_gumballMachine( gumballMachine ) { assert(gumballMachine );
    }
	public: void insertQuarter() const {
		std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
	}
	public: void ejectQuarter() const {
		std::cout << "You can't eject, you haven't inserted a quarter yet" << std::endl;
	}
	public: void turnCrank() const {
		std::cout << "You turned, but there are no gumballs" << std::endl;
	}
	public: void dispense() {
		std::cout << "No gumball dispensed" << std::endl;
	}
	public: std::string toString() const {
		return "sold out";
	}
};

} // namespace GumballStateWinner
} // namespace State
} // namespace HeadFirstDesignPatterns

#endif

