#ifndef	_HFDP_CPP_COMPOUND_FACTORY_GOOSE_ADAPTER_HPP_
#define _HFDP_CPP_COMPOUND_FACTORY_GOOSE_ADAPTER_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Factory {

class GooseAdapter : public Quackable {

	private: std::auto_ptr< Goose > _goose;
 
	private: GooseAdapter( const GooseAdapter& ); // Disable copy constructor
	private: void operator=( const GooseAdapter& ); // Disable assignment operator

	public: explicit GooseAdapter( Goose* goose ) :
		_goose( goose ) { assert( goose );
	}
	public: void quack() const {
		_goose->honk();
	}
	public: std::string toString() const {
		return "Goose pretending to be a Duck";
	}
};

} // namespace Factory
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif