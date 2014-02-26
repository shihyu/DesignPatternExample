#include "Remotes.hpp"

using namespace HeadFirstDesignPatterns::Bridge::Remotes;

int main( int argc, char* argv[] ) {

	std::vector< RemoteControl* > remotes;

	std::auto_ptr< SonyControl > sonyControl( new SonyControl( "XBR in living room" ) );
	remotes.push_back( sonyControl.get() );

	std::auto_ptr< RCAControl > rcaControl( new RCAControl( "19 inch in kitchen" ) );
	remotes.push_back( rcaControl.get() );

	// turn on all tv's
	std::vector< RemoteControl* >::iterator iterator;
	for( iterator = remotes.begin(); iterator != remotes.end(); iterator++ ) {
		( *iterator )->on();
	}

	sonyControl->nextChannel();
	rcaControl->setStation( 35 );

	// turn off all tv's
	for( iterator = remotes.begin(); iterator != remotes.end(); iterator++ ) {
		( *iterator )->off();
	}

	return 0;
}