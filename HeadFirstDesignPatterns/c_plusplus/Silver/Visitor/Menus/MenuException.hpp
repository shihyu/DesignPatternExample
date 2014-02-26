#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_VISITOR_MENUS_EXCEPTION_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_VISITOR_MENUS_EXCEPTION_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class UnsupportedOperationException : public std::exception {

	private: std::string _message;
			
	public: UnsupportedOperationException() : 
		std::exception() {
	}
	public: UnsupportedOperationException( const std::string message ) : 
		std::exception( message.c_str() ), _message( message ) {
	}
	public: std::string getMessage() const {
		return _message;
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
