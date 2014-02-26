#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_GUMBALL_MACHINE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_GUMBALL_MACHINE_HPP_

namespace HeadFirstDesignPatterns {
namespace State {
namespace GumballStateWinner {

class GumballMachine {

 	private: State* _soldOutState;
	private: State* _noQuarterState;
	private: State* _hasQuarterState;
	private: State* _soldState;
	private: State* _winnerState;
 	private: State* _state;
	private: int _count;
 
	private: GumballMachine( const GumballMachine& ); // Disable copy constructor
	private: void operator=( const GumballMachine& ); // Disable assignment operator

	public: explicit GumballMachine(int numberGumballs );
	public: ~GumballMachine() {
		delete _soldOutState;
		delete _noQuarterState;
		delete _hasQuarterState;
		delete _soldState;
		delete _winnerState;
	}
	public: void insertQuarter() const {
		_state->insertQuarter();
	}
	public: void ejectQuarter() const {
		_state->ejectQuarter();
	}
	public: void turnCrank() const {
		_state->turnCrank();
		_state->dispense();
	}
	public: void setState( State* state ) { assert( state );
		_state = state;
	}
	public: void releaseBall() {
		std::cout << "A gumball comes rolling out the slot..." << std::endl;
		if( _count != 0) {
			_count--;
		}
	}
	public: int getCount() const {
		return _count;
	}
	public: void refill( int count ) { assert( count > 0 );
		_count = count;
		_state = _noQuarterState;
	}
    public: State* getState() const {
        return _state;
    }
    public: State* getSoldOutState() const {
        return _soldOutState;
    }
    public: State* getNoQuarterState() const {
        return _noQuarterState;
    }
    public: State* getHasQuarterState() const {
        return _hasQuarterState;
    }
   public: State* getSoldState() const {
        return _soldState;
    }
    public: State* getWinnerState() const {
        return _winnerState;
    }
	public: std::string toString() const {
		std::stringstream value; 
		value << std::endl << "Mighty Gumball, Inc.";
		value << std::endl << "C++-enabled Standing Gumball Model #2004";
		value << std::endl << "Inventory: " << _count << " gumball";
		if( _count > 1 ) {
			value << "s";
		}
		value << std::endl;
		value << "Machine is " << _state->toString() << std::endl;
		return value.str();
	}
};

} // namespace GumballStateWinner
} // namespace State
} // namespace HeadFirstDesignPatterns

#endif
