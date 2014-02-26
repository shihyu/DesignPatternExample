#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
namespace Facade {
namespace HomeTheater {

class HomeTheaterFacade {

	private: Amplifier* _amp;
	private: Tuner* _tuner;
	private: DvdPlayer* _dvd;
	private: CdPlayer* _cd;
	private: Projector* _projector;
	private: TheaterLights* _lights;
	private: Screen* _screen;
	private: PopcornPopper* _popper;
 
	private: HomeTheaterFacade( const HomeTheaterFacade& ); // Disable copy constructor
	private: void operator=( const HomeTheaterFacade& ); // Disable assignment operator

	public: HomeTheaterFacade( Amplifier* amp, Tuner* tuner, DvdPlayer* dvd, CdPlayer* cd, Projector* projector, Screen* screen, TheaterLights* lights, PopcornPopper* popper ) :
		_amp( amp ), _tuner( tuner ), _dvd( dvd ), _cd( cd ), _projector( projector ), _lights( lights ), _screen( screen ), _popper( popper ) {
		assert(amp); assert(tuner); assert(dvd); assert(cd); assert(projector);	assert(screen);	assert(lights);	assert(popper);
	}
 	public: void watchMovie( std::string movie ) {
		std::cout << "Get ready to watch a movie..." << std::endl;
		_popper->on();
		_popper->pop();
		_lights->dim( 10 );
		_screen->down();
		_projector->on();
		_projector->wideScreenMode();
		_amp->on();
		_amp->setDvd( _dvd );
		_amp->setSurroundSound();
		_amp->setVolume( 5 );
		_dvd->on();
		_dvd->play( movie );
	}
	public: void endMovie() {
		std::cout << "Shutting movie theater down..." << std::endl;
		_popper->off();
		_lights->on();
		_screen->up();
		_projector->off();
		_amp->off();
		_dvd->stop();
		_dvd->eject();
		_dvd->off();
	}
	public: void listenToCd( std::string cdTitle ) {
		std::cout << "Get ready for an audiopile experence..." << std::endl;
		_lights->on();
		_amp->on();
		_amp->setVolume( 5 );
		_amp->setCd( _cd );
		_amp->setStereoSound();
		_cd->on();
		_cd->play( cdTitle );
	}
	public: void endCd() {
		std::cout << "Shutting down CD..." << std::endl;
		_amp->off();
		_amp->setCd( _cd );
		_cd->eject();
		_cd->off();
	}
	public: void listenToRadio( double frequency ) {
		std::cout << "Tuning in the airwaves..." << std::endl;
		_tuner->on();
		_tuner->setFrequency( frequency );
		_amp->on();
		_amp->setVolume( 5 );
		_amp->setTuner( _tuner );
	}
	public: void endRadio() {
		std::cout << "Shutting down the tuner..." << std::endl;
		_tuner->off();
		_amp->off();
	}
};

} // namespace HomeTheater
} // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

