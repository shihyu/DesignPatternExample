#ifndef	_HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_ON_COMMAND_HPP_

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Undo {

class DimmerLightOnCommand : public Command {

	private: const Light* _light;
	private: mutable int _prevLevel;
 
	public: explicit DimmerLightOnCommand( const Light* light ) :
		_light( light ) { assert( light );
		_prevLevel = _light->getLevel();
	}
	public: void execute() const {
		_prevLevel = _light->getLevel();
		_light->dim( 75 );
	}
	public: void undo() const {
		_light->dim( _prevLevel );
	}
};

} // namespace Undo
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif