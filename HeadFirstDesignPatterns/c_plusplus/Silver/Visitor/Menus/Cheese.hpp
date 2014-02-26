#ifndef	_HFDP_CPP_VISITOR_CHEESE_HPP_
#define _HFDP_CPP_VISITOR_CHEESE_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Cheese : public Ingredient {

	public: explicit Cheese( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 751.0f;
	};
	public: float getCarbs() const {
		return 19.0f;
	};
	public: float getProtien() const {
		return 0.0f;
	}
	public: float getFat() const {
		return 56.0f;
	}
	public: float getCholesterol() const {
		return 0.145f;
	}
	public: float getSodium() const {
		return 2.193f;
	}
	public: bool isVegetarian() const {
		return false;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Cheese(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif