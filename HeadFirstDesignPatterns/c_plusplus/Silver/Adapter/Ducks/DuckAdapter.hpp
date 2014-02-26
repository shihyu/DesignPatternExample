#ifndef	_HFDP_CPP_ADAPTER_DUCK_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTER_DUCK_ADAPTER_HPP_

#include "Ducks.hpp"
#include <process.h>

namespace HeadFirstDesignPatterns {
namespace Adapter {
namespace Ducks {

class DuckAdapter : public Turkey {

 	private: std::auto_ptr< const Duck > _duck;
	private: int _random;

	private: DuckAdapter( const DuckAdapter& ); // Disable copy constructor
	private: void operator=( const DuckAdapter& ); // Disable assignment operator

	public: explicit DuckAdapter( const Duck* duck ) :
		_duck ( duck ) { assert( duck );
		srand( _getpid() );
		_random = rand() % 5;
		if( _random == 0 )
			_random = 1;
	}
	public: void fly() const {	assert( _duck );
		for( int i = 0; i < _random; i++ ) {
			_duck->fly();
		}
	}
	public: void gobble() const { assert( _duck );
		_duck->quack();
	}
};

} // namespace Ducks
} // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
