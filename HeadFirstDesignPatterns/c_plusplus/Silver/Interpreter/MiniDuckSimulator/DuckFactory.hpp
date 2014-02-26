#ifndef	_HFDP_CPP_INTERPRETER_DUCK_FACTORY_HPP_
#define _HFDP_CPP_INTERPRETER_DUCK_FACTORY_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Interpreter {
namespace MiniDuckSimulator {

class DuckFactory {
	public: static Duck* createDuck( int type ) {
		if( 1 == type )
			return new MallardDuck();
		else if( 2 == type )
			return new RedHeadDuck();
		else if( 3 == type )
			return new RubberDuck();
		else if( 4 == type )
			return new ModelDuck();
		else
			return 0;
	}
};

} // namespace MiniDuckSimulator
} // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif