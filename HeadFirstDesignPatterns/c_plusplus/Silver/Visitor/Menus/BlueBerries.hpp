#ifndef	_HFDP_CPP_VISITOR_BERRIES_HPP_
#define _HFDP_CPP_VISITOR_BERRIES_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class BlueBerries : public Ingredient {

	public: explicit BlueBerries( float amount = 1.0f ) :
		Ingredient( amount ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return 83.0f;
	};
	public: float getCarbs() const {
		return 21.0f;
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
		return 0.1f;
	}
	public: bool isVegetarian() const {
		return true;
	}
	public: std::string toString() const {
		std::stringstream result;
		result << "Blue berries(" << _amount << ")";
		return result.str();
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif