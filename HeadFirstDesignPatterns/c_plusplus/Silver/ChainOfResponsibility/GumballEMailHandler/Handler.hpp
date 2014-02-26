#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_GUMBALL_EMAIL_HANDLER_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_GUMBALL_EMAIL_HANDLER_HANDLER_HPP_

namespace HeadFirstDesignPatterns {
namespace ChainOfResponsibility {
namespace GumballEMailHandler {

class Handler {

	private: mutable std::list< std::string > _requests;
	private: const Handler* _successor;

	private: Handler( const Handler& ); // Disable copy constructor
	private: void operator=( const Handler& ); // Disable assignment operator

	protected: explicit Handler( const Handler* successor = 0 ) :
		_successor( successor ) {
	}
	public: virtual ~Handler() {
	}
	public: virtual void handleRequest( std::string request ) const {
		if( _successor ) {
			_successor->handleRequest( request );
		}
	}
	protected: virtual bool canHandleRequest( const std::string& request ) const {
		_requests.push_back( request );
		return true;
	}
	public: virtual void print() const = 0 {
		std::cout << " count=" << _requests.size() << std::endl;
		std::list< std::string >::const_iterator iterator = _requests.begin();
		while( iterator != _requests.end() ) {
			std::cout << " - " << ( *iterator ).c_str() << std::endl;
			iterator++;
		}
		if( _successor ) {
			_successor->print();
		}
	}
};

} // namespace GumballEMailHandler
} // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif
