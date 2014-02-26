#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_DVD_PLAYER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_DVD_PLAYER_HPP_

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
namespace Facade {
namespace HomeTheater {

class Amplifier;

class DvdPlayer {
	private: std::string _description;
	private: Amplifier* _amplifier;
	private: int _currentTrack;
	private: std::string _movie;
	
	private: DvdPlayer( const DvdPlayer& ); // Disable copy constructor
    private: void operator=( const DvdPlayer& ); // Disable assignment operator

	public: DvdPlayer( std::string description, Amplifier* amplifier ) :
		_description( description ), _amplifier( amplifier ), _currentTrack( 0 ) { assert( amplifier );
	}
 	public: void on() const {
		std::cout << _description << " on" << std::endl;
	}
 	public: void off() const {
		std::cout << _description << " off" << std::endl;
	}
    public: void eject() {
		_movie.empty();
		std::cout << _description << " eject" << std::endl;
    }
	public: void play( std::string movie ) {
		_movie = movie;
		std::cout << _description << " playing \"" << _movie << "\"" << std::endl;
	}
	public: void play( int track ) {
		if( _movie.length() == 0 ) {
			std::cout << _description << " can't play track " << track << " no dvd inserted" << std::endl;
		} else {
			_currentTrack = track;
			std::cout << _description << " playing track " << track << " of \"" << _movie << "\"" << std::endl;
		}
	}
	public: void stop() {
		_currentTrack = 0;
		std::cout << _description << " stopped \"" << _movie << "\"" << std::endl;
	}
	public: void pause() {
		std::cout << _description << " paused \"" << _movie << "\"" << std::endl;
	}
	public: void setTwoChannelAudio() {
		std::cout << _description << " set two channel audio" << std::endl;
	}
	public: void setSurroundAudio() {
		std::cout << _description << " set surround audio" << std::endl;
	}
	public: std::string toString() const {
		return _description;
	}
};

} // namespace HomeTheater
} // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

