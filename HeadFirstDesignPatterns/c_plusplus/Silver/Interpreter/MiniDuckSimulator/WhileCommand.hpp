#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_WHILE_COMMAND_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_WHILE_COMMAND_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class WhileCommand : public Expression {

	private: std::auto_ptr< Variable > _variable;
	private: std::vector< std::string > _expression;

	public: WhileCommand( Variable* variable, std::vector< std::string >& expression ) :
		_variable( variable ), _expression( expression ) { assert( variable );
	}
	private: ~WhileCommand() { // disable inheritance
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		visitor->interpret( this );
	}
	public: bool evaluate() {
		bool value = _variable->evaluate();
		return value;
	}
	public: std::string variable() {
		return _variable->name();
	}
	public: std::vector< std::string >& expression() {
		return _expression;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif