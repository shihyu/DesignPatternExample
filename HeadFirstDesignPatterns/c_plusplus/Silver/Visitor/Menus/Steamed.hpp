#ifndef	_HFDP_CPP_VISITOR_STEAMED_HPP_
#define _HFDP_CPP_VISITOR_STEAMED_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Steamed : public IngredientDecorator {

	public: explicit Steamed( Ingredient* ingredient) : IngredientDecorator( ingredient ) {
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return _ingredient->accept( visitor );;
	}
	public: float getCalories() const {
		return _ingredient->getCalories(); // no change
	};
	public: float getCarbs() const {
		return _ingredient->getCarbs(); // no change
	};
	public: float getProtien() const {
		return _ingredient->getProtien(); // no change
	}
	public: float getFat() const {
		return _ingredient->getFat(); // no change
	}
	public: float getCholesterol() const {
		return _ingredient->getCholesterol(); // no change
	}
	public: float getSodium() const {
		return _ingredient->getSodium(); // no change
	}
	public: bool isVegetarian() const {
		return _ingredient->isVegetarian(); // no change
	}
	public: std::string toString() const {
		std::string result( "Steamed" );
		result.append( "(" );
		result.append( _ingredient->toString() );
		result.append( ")" );
		return result;
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif