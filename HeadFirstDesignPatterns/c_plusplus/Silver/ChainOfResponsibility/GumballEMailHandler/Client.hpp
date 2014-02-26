#ifndef	_HFDP_CPP_CHAIN_OF_RESPONSIBILITY_CLIENT_HPP_
#define _HFDP_CPP_CHAIN_OF_RESPONSIBILITY_CLIENT_HPP_

namespace HeadFirstDesignPatterns {
namespace ChainOfResponsibility {
namespace GumballEMailHandler {

class Client {

	private: std::auto_ptr< Handler > _lastHandler;
	private: std::auto_ptr< Handler > _newHandler;
	private: std::auto_ptr< Handler > _hateHandler;
	private: std::auto_ptr< Handler > _fanHandler;
	private: std::auto_ptr< Handler > _spamHandler;

	private: Client( const Client& ); // Disable copy constructor
	private: void operator=( const Client& ); // Disable assignment operator

	public: Client() :
		_lastHandler( new LastHandler() ), 
		_newHandler(  new NewLocationHandler( _lastHandler.get() ) ),
		_hateHandler( new ComplaintHandler( _newHandler.get() ) ),
		_fanHandler(  new FanHandler( _hateHandler.get() ) ),
		_spamHandler( new SpamHandler ( _fanHandler.get() ) ) {
	}
	public: void handleRequest( std::string request ) const {
		_spamHandler->handleRequest( request );
	}
	public: void print() const {
		_spamHandler->print();
	}
};

} // namespace GumballEMailHandler
} // namespace ChainOfResponsibility
} // namespace HeadFirstDesignPatterns

#endif
