#ifndef	_HFDP_CPP_ADAPTER_TURKEY_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTER_TURKEY_ADAPTER_HPP_

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
namespace Adapter {
namespace Ducks {

class TurkeyAdapter : public Duck {

	private: const Turkey* _turkey;

	private: TurkeyAdapter( const TurkeyAdapter& ); // Disable copy constructor
	private: void operator=( const TurkeyAdapter& ); // Disable assignment operator

	public: explicit TurkeyAdapter( const Turkey* turkey ) :
		_turkey( turkey ) { assert( turkey );
	}
 	public: void fly() const { assert( _turkey );
		for( int i = 0; i < 5; i++ ) {
			_turkey->fly();
		}
	}
	public: void quack() const { assert( _turkey );
		_turkey->gobble();
	}
};

} // namespace Ducks
} // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif
