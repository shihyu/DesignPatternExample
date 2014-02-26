#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_FAN_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_FAN_HANDLER_HPP_

namespace HeadFirstDesignPatterns {
namespace ChainOfResponsibility {
namespace GumballEMailHandler {

class FanHandler : public Handler {

	public: explicit FanHandler( const Handler* successor = 0 ) :
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

		if( std::string::npos != request.find( "razz" ) ) {
			value = true;
		} else if( std::string::npos != request.find( "hip" ) ) {
			value = true;
		} else if( std::string::npos != request.find( "radioactive" ) ) {
			value = true;
		} else if( std::string::npos != request.find( "blast" ) ) {
			value = true;
		} else if( std::string::npos != request.find( "boss" ) ) {
			value = true;
		} else if( std::string::npos != request.find( "orbit" ) ) {
			value = true;
		} else if( std::string::npos != request.find( "kick" ) ) {
			value = true;
		}
		return value;
	}
	public: void print() const {
		std:: cout << std::endl << "Fan mail, send to CEO:";
		Handler::print();
	}
};

} // namespace GumballEMailHandler
} // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif
