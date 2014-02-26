#ifndef	_HFDP_CPP_VISITOR_MILK_HPP_
#define _HFDP_CPP_VISITOR_MILK_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Milk : public Ingredient {

	public: explicit Milk( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 146.0f;
	};
	public: float getCarbs() const {
		return 11.0f;
	};
	public: float getProtien() const {
		return 8.0f;
	}
	public: float getFat() const {
		return 8.0f;
	}
	public: float getCholesterol() const {
		return 0.0f;
	}
	public: float getSodium() const {
		return 0.98f;
	}
	public: bool isVegetarian() const {
		return false;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Milk(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif