#ifndef	_HFDP_CPP_VISITOR_TOMATO_HPP_
#define _HFDP_CPP_VISITOR_TOMATO_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Tomato : public Ingredient {

	public:explicit  Tomato( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 25.0f;
	};
	public: float getCarbs() const {
		return 0.0f;
	};
	public: float getProtien() const {
		return 2.0f;
	}
	public: float getFat() const {
		return 0.0f;
	}
	public: float getCholesterol() const {
		return 0.0f;
	}
	public: float getSodium() const {
		return 0.66f;
	}
	public: bool isVegetarian() const {
		return true;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Tomato(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif