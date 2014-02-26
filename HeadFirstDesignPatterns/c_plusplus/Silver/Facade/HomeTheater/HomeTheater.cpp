#include "HomeTheater.hpp"

using namespace HeadFirstDesignPatterns::Facade::HomeTheater;

int main( int argc, char* argv[] ) {

	std::auto_ptr< Amplifier > amp(
		new Amplifier( "Top-O-Line Amplifier" ) );
	std::auto_ptr< Tuner > tuner(
		new Tuner( "Top-O-Line AM/FM Tuner", amp.get() ) );
	std::auto_ptr< DvdPlayer > dvd(
		new DvdPlayer( "Top-O-Line DVD Player", amp.get() ) );
	std::auto_ptr< CdPlayer > cd(
		new CdPlayer( "Top-O-Line CD Player", amp.get() ) );
	std::auto_ptr< Projector > projector(
		new Projector( "Top-O-Line Projector", dvd.get() ) );
	std::auto_ptr< TheaterLights > lights(
		new TheaterLights( "Theater Ceiling Lights" ) );
	std::auto_ptr< Screen > screen(
		new Screen( "Theater Screen" ) );
	std::auto_ptr< PopcornPopper > popper(
		new PopcornPopper( "Popcorn Popper" ) );
	std::auto_ptr< HomeTheaterFacade > homeTheater(
		new HomeTheaterFacade( amp.get(), tuner.get(), dvd.get(), cd.get(), projector.get(), screen.get(), lights.get(), popper.get() ) );

	homeTheater->watchMovie( "Raiders of the Lost Ark" );
	homeTheater->endMovie();

	return 0;
}