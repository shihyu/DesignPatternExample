#ifndef	_HFDP_CPP_VISITOR_BEEF_HPP_
#define _HFDP_CPP_VISITOR_BEEF_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Beef : public Ingredient {

	public: explicit Beef( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 1320.0f;
	};
	public: float getCarbs() const {
		return 0.0f;
	};
	public: float getProtien() const {
		return 79.0f;
	}
	public: float getFat() const {
		return 109.0f;
	}
	public: float getCholesterol() const {
		return 0.336f;
	}
	public: float getSodium() const {
		return 0.286f;
	}
	public: bool isVegetarian() const {
		return false;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Beef(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif