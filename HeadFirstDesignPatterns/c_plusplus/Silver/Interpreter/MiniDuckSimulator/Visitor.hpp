#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_VISITOR_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_VISITOR_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class QuackCommand;
class FlyCommand;
class LeftCommand;
class RightCommand;
class DisplayCommand;
class SwimCommand;
class WhileCommand;
class Variable;

class Visitor {

	protected: explicit Visitor() {
	}
	public: virtual ~Visitor() = 0 {
	}
	public: virtual void interpret( DisplayCommand* command ) = 0;
	public: virtual void interpret( QuackCommand* command ) = 0;
	public: virtual void interpret( FlyCommand* command ) = 0;
	public: virtual void interpret( LeftCommand* command ) = 0;
	public: virtual void interpret( RightCommand* command ) = 0;
	public: virtual void interpret( SwimCommand* command ) = 0;
	public: virtual void interpret( WhileCommand* command ) = 0;
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif