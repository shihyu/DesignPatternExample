#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_VARIABLE_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_VARIABLE_HPP_

#include "MiniDuckSimulator.hpp"
#include <process.h>

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class Variable {

	private: const std::string _name;
	private: int _value;

	public: explicit Variable( const std::string name ) :
		_name( name ), _value( -1 ) {
		srand( _getpid() );	// seed random-number generation with unique value
	};
	public: std::string name() const {
		return _name;
	}
	// return a boolean result based on a random number to simulate processing;
	// however, initial evaluation returns true so 'while' statements execute
	// at least one time.
	public: bool evaluate() {
		std::cout << "evaluating (" << _name.c_str() << ")...";

		if( 0 > _value )	// initial evaluation, so...
			_value = 1;		// indicate 'true'
		else
			_value = ( rand() % 100 ) % 3;

		if( 0 == _value ) {
			std::cout << "'false'" << std::endl;
			return false;
		} else {
			std::cout << "'true'" << std::endl;
			return true;
		}
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif