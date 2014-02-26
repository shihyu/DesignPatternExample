#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_COMMAND_HPP_

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace SimpleRemote {

class Command {

	public: virtual ~Command() = 0 {
	}
	public: virtual void execute() const = 0;
};

} // namespace SimpleRemote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif