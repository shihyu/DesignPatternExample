#ifndef	_HFDP_CPP_VISITOR_BREAD_HPP_
#define _HFDP_CPP_VISITOR_BREAD_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Bread : public Ingredient {

	public: explicit Bread( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 120.0f;
	};
	public: float getCarbs() const {
		return 23.0f;
	};
	public: float getProtien() const {
		return 3.0f;
	}
	public: float getFat() const {
		return 1.0f;
	}
	public: float getCholesterol() const {
		return 0.0f;
	}
	public: float getSodium() const {
		return 0.306f;
	}
	public: bool isVegetarian() const {
		return true;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Bread(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif