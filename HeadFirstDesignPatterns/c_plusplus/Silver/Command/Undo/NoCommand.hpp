#ifndef	_HFDP_CPP_COMMAND_UNDO_NO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_NO_COMMAND_HPP_

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Undo {

class NoCommand : public Command {

	public: void execute() const {
	};
	public: void undo() const {
	};
};

} // namespace Undo
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif