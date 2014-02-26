#ifndef	_HFDP_CPP_COMMAND_REMOTE_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_COMMAND_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class Command {

	private: Command( const Command& ); // Disable copy constructor
	private: void operator=( const Command& ); // Disable assignment operator

	protected: Command() {
	}
	public: virtual ~Command() = 0 {
	}
	public: virtual void execute() const = 0;
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif