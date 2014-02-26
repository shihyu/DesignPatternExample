#ifndef	_HFDP_CPP_VISITOR_MAYONNASIE_HPP_
#define _HFDP_CPP_VISITOR_MAYONNASIE_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Mayonnaise : public Ingredient {

	public: explicit Mayonnaise( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 916.0f;
	};
	public: float getCarbs() const {
		return 56.0f;
	};
	public: float getProtien() const {
		return 2.0f;
	}
	public: float getFat() const {
		return 78.0f;
	}
	public: float getCholesterol() const {
		return 0.61f;
	}
	public: float getSodium() const {
		return 1.671f;
	}
	public: bool isVegetarian() const {
		return true;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Mayonnaise(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif