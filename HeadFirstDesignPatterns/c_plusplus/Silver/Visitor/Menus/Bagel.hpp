#ifndef	_HFDP_CPP_VISITOR_BAGEL_HPP_
#define _HFDP_CPP_VISITOR_BAGEL_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Bagel : public Ingredient {

	public: explicit Bagel( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 216.0f;
	};
	public: float getCarbs() const {
		return 0.0f;
	};
	public: float getProtien() const {
		return 0.0f;
	}
	public: float getFat() const {
		return 1.4f;
	}
	public: float getCholesterol() const {
		return 0.0f;
	}
	public: float getSodium() const {
		return 0.0f;
	}
	public: bool isVegetarian() const {
		return false;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Bagel(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif