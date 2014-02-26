#ifndef	_HFDP_CPP_VISITOR_MENUS_MENU_ITEM_HPP_
#define _HFDP_CPP_VISITOR_MENUS_MENU_ITEM_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class MenuItem : public MenuComponent {

	private: std::string _name;
	private: std::string _description;
	private: double _price;

 	protected: mutable std::list< Ingredient* > _ingredients;

	public: MenuItem( const std::string name, const std::string description, double price ) :
		_name( name ), _description( description ), _price( price ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		visitor->visit( this );
		std::list< Ingredient* >::const_iterator iterator = _ingredients.begin();
		while( iterator != _ingredients.end() ) {
			( *iterator )->accept( visitor );
			 ++iterator;
		}
	}
 	public: void add( Ingredient* ingredient ) { assert( ingredient );
		_ingredients.push_back( ingredient );
	}
	public: double getPrice() const {
		return _price;
	}
	public: float getHealthRating() const {
		float result = 0.0f;
		std::list< Ingredient* >::const_iterator iterator = _ingredients.begin();
		while( iterator != _ingredients.end() ) {
			result += ( *iterator )->getHealthRating();
			++iterator;
		}
		return result;
	}

	public: bool isVegetarian() const {
		bool result = true;
		std::list< Ingredient* >::const_iterator iterator = _ingredients.begin();
		while( iterator != _ingredients.end() && true == result ) {
			result = ( *iterator )->isVegetarian();
			++iterator;
		}
		return result;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << _name;
		if ( true == isVegetarian() ) {
			result << " (v)";
		}
		result << " $" << getPrice();
		result << "\t";
		result << _description;

		//std::list< std::pair < Ingredient*, float > >::const_iterator iterator = _ingredients.begin();
		//while( iterator != _ingredients.end() ) {
		//	result << "\t";
		//	result << ( *iterator ).first->toString();
		//	result << " x " << ( *iterator ).second;
		//	++iterator;
		//}

		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
