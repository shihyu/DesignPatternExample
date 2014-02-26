#ifndef	_HFDP_CPP_VISITOR_MENUS_WAITRESS_HPP_
#define _HFDP_CPP_VISITOR_MENUS_WAITRESS_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Waitress : Visitor {

	private: MenuComponent* _allMenus;
 
	private: Waitress( const Waitress& ); // Disable copy constructor
	private: void operator=( const Waitress& ); // Disable assignment operator

	public: explicit Waitress( MenuComponent* allMenus ) :
		_allMenus( allMenus ) { assert( allMenus );
	}
 	public: void printMenu() {
		_allMenus->accept( this );
	}
	public: virtual void visit( Menu* component ) { assert( component );
		std::stringstream tokens( component->toString() );
		std::string token;
		std::cout << std::endl;
		while( std::getline( tokens, token, '\t' ) ) {
			std::cout << token;
			std::cout << std::endl << "\t";
		}
	}
	public: virtual void visit( MenuItem* component )  {  assert( component );
		std::stringstream tokens( component->toString() );
		std::string token;
		while( std::getline( tokens, token, '\t' ) ) {
			std::cout << std::endl << "\t\t";	// indent
			std::cout << token;
		}
		std::cout << " | ";
		std::cout << component->getHealthRating();
	}
	public: virtual void visit( Ingredient* component ) { assert( component );
		std::stringstream tokens( component->toString() );
		std::string token;
		while( std::getline( tokens, token, '\t' ) ) {
			std::cout << std::endl << "\t\t\t";	// indent
			std::cout << token;
		}
		std::cout << " | ";
		std::cout << component->getHealthRating();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif

