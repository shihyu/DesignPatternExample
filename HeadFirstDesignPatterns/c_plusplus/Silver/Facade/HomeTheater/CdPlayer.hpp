#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
namespace Facade {
namespace HomeTheater {

class Amplifier;

class CdPlayer {

	private: std::string _description;
	private: Amplifier* _amplifier;
	private: std::string _title;
	private: int _currentTrack;
	
	private: CdPlayer( const CdPlayer& ); // Disable copy constructor
	private: void operator=( const CdPlayer& ); // Disable assignment operator

	public: CdPlayer( std::string description, Amplifier* amplifier ) :
		_description( description ), _amplifier( amplifier ), _currentTrack( 0 ) { assert( amplifier );
	}
	public: void on() const {
		std::cout << _description.c_str() << " on" << std::endl;
	}
	public: void off() const {
		std::cout << _description.c_str() << " off" << std::endl;
	}
	public: void eject() {
		_title.empty();
		std::cout << _description.c_str() << " eject" << std::endl;
	}
	public: void play( std::string title) {
		_title = title;
		std::cout << _description.c_str() << " playing \"" << _title << "\"" << std::endl;
	}
	public: void play( int track ) {
		if( _title.length() == 0 ) {
			std::cout << _description.c_str() << " can't play track " << _currentTrack << ", no cd inserted" << std::endl;
		} else {
			_currentTrack = track;
			std::cout << _description.c_str() << " playing track " << _currentTrack << std::endl;
		}
	}
	public: void stop() {
		_currentTrack = 0;
		std::cout << _description.c_str() << " stopped" << std::endl;
	}
 	public: void pause() {
		std::cout << _description.c_str() << " paused \"" << _title << "\"" << std::endl;
	}
 	public: std::string toString() const {
		return _description;
	}
};

} // namespace HomeTheater
} // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

