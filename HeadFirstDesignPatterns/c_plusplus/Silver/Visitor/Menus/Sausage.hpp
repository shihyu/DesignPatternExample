#ifndef	_HFDP_CPP_VISITOR_SAUSAGE_HPP_
#define _HFDP_CPP_VISITOR_SAUSAGE_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Sausage : public Ingredient {

	public: explicit Sausage( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 94.0f;
	};
	public: float getCarbs() const {
		return 0.0f;
	};
	public: float getProtien() const {
		return 5.0f;
	}
	public: float getFat() const {
		return 8.0f;
	}
	public: float getCholesterol() const {
		return 0.23f;
	}
	public: float getSodium() const {
		return 0.184f;
	}
	public: bool isVegetarian() const {
		return false;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Sausage(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif