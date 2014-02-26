#ifndef	_HFDP_CPP_VISITOR_SAUERKRAUT_HPP_
#define _HFDP_CPP_VISITOR_SAUERKRAUT_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Sauerkraut : public Ingredient {

	public: explicit Sauerkraut( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 31.0f;
	};
	public: float getCarbs() const {
		return 6.0f;
	};
	public: float getProtien() const {
		return 1.0f;
	}
	public: float getFat() const {
		return 0.0f;
	}
	public: float getCholesterol() const {
		return 0.0f;
	}
	public: float getSodium() const {
		return 0.437f;
	}
	public: bool isVegetarian() const {
		return true;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "SauerKraut(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif