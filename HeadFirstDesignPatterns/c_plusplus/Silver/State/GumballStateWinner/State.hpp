#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_STATE_HPP_

namespace HeadFirstDesignPatterns {
namespace State {
namespace GumballStateWinner {

class State {

	public: virtual ~State() = 0 {
	}
 	public: virtual void insertQuarter() const = 0;
	public: virtual void ejectQuarter() const = 0;
	public: virtual void turnCrank() const = 0;
	public: virtual void dispense() = 0;
	public: virtual std::string toString() const = 0;
};

} // namespace GumballStateWinner
} // namespace State
} // namespace HeadFirstDesignPatterns

#endif