#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_DEFAULT_HANDLER_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_DEFAULT_HANDLER_HPP_

namespace HeadFirstDesignPatterns {
namespace ChainOfResponsibility {
namespace GumballEMailHandler {

class LastHandler : public Handler {

	public: explicit LastHandler( const Handler* successor = 0 ) : 
		Handler( successor ) {
	}
	public: void handleRequest( std::string request ) const {
		Handler::canHandleRequest( request );
	}
	public: void print() const {
		std:: cout << std::endl << "Unclassified, send to AI team:";
		Handler::print();
	}
};

} // namespace GumballEMailHandler
} // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif
