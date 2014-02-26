#ifndef	_HFDP_CPP_COMMAND_UNDO_CEILING_FAN_MEDIUM_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_CEILING_FAN_MEDIUM_COMMAND_HPP_

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Undo {

class CeilingFanMediumCommand : public Command {

	private: const CeilingFan* _ceilingFan;
	private: mutable int _prevSpeed;
  
	public: explicit CeilingFanMediumCommand( const CeilingFan* ceilingFan ) :
		_ceilingFan( ceilingFan ) { assert( ceilingFan );
		_prevSpeed = _ceilingFan->getSpeed();
	}
 	public: void execute() const {
		_prevSpeed = _ceilingFan->getSpeed();
		_ceilingFan->medium();
	}
 	public: void undo() const {
		if( _prevSpeed == CeilingFan::HIGH ) {
			_ceilingFan->high();
		} else if( _prevSpeed == CeilingFan::MEDIUM ) {
			_ceilingFan->medium();
		} else if( _prevSpeed == CeilingFan::LOW ) {
			_ceilingFan->low();
		} else if( _prevSpeed == CeilingFan::OFF ) {
			_ceilingFan->off();
		}
	}
};

} // namespace Undo
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
