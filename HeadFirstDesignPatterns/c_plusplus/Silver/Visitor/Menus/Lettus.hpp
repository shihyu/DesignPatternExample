#ifndef	_HFDP_CPP_VISITOR_LETTUS_HPP_
#define _HFDP_CPP_VISITOR_LETTUS_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Lettus : public Ingredient {

	public: explicit Lettus( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 1.0f;
	};
	public: float getCarbs() const {
		return 0.0f;
	};
	public: float getProtien() const {
		return 0.0f;
	}
	public: float getFat() const {
		return 0.0f;
	}
	public: float getCholesterol() const {
		return 0.0f;
	}
	public: float getSodium() const {
		return 0.0f;
	}
	public: bool isVegetarian() const {
		return true;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Lettus(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif