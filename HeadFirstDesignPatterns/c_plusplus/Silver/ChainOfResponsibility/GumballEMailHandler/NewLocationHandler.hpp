#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_NEW_LOCATION_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_NEW_LOCATION_HANDLER_HPP_

namespace HeadFirstDesignPatterns {
namespace ChainOfResponsibility {
namespace GumballEMailHandler {

class NewLocationHandler : public Handler {

	public: explicit NewLocationHandler( const Handler* successor = 0 ) : 
		Handler( successor ) {
	}
	public: void handleRequest( std::string request ) const {
		std::transform( request.begin(), request.end(), request.begin(), tolower );

		if( canHandleRequest( request ) == true ) {
			Handler::canHandleRequest( request );
		} else {
			Handler::handleRequest( request );
		}
	}
	public: bool canHandleRequest( const std::string& request ) const {
		bool value = false;
		if( std::string::npos != request.find( "store" ) ) {
			value = true;
		}
		return value;
	}
	public: void print() const {
		std::cout << std::endl << "Request mail, send to Business Development:";
		Handler::print();
	}
};

} // namespace GumballEMailHandler
} // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif

