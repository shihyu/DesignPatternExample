#ifndef	_HFDP_CPP_VISITOR_MIXED_VEGETABLES_HPP_
#define _HFDP_CPP_VISITOR_MIXED_VEGETABLES_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class MixedVegetables : public Ingredient {

	public: explicit MixedVegetables( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 150.0f;
	};
	public: float getCarbs() const {
		return 30.0f;
	};
	public: float getProtien() const {
		return 7.0f;
	}
	public: float getFat() const {
		return 1.0f;
	}
	public: float getCholesterol() const {
		return 0.0f;
	}
	public: float getSodium() const {
		return 0.225f;
	}
	public: bool isVegetarian() const {
		return true;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Mixed vegetables(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif