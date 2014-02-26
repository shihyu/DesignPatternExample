#ifndef	_HFDP_CPP_VISITOR_SUBSTITUTE_HPP_
#define _HFDP_CPP_VISITOR_SUBSTITUTE_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Substitute : public IngredientDecorator {

	public: explicit Substitute( Ingredient* ingredient) : IngredientDecorator( ingredient ) {
	}
	public: void accept( Visitor* visitor ) {
		return _ingredient->accept( visitor );;
	}
	public: float getCalories() const {
		return _ingredient->getCalories() / 2.0f;
	};
	public: float getCarbs() const {
		return _ingredient->getCarbs() / 2.0f;
	};
	public: float getProtien() const {
		return _ingredient->getProtien() / 2.0f;
	}
	public: float getFat() const {
		return  _ingredient->getFat() / 2.0f;
	}
	public: float getCholesterol() const {
		return _ingredient->getCholesterol() / 2.0f;
	}
	public: float getSodium() const {
		return _ingredient->getSodium() / 2.0f;
	}
	public: bool isVegetarian() const {
		return true;
	}
	public: std::string toString() const {
		std::string result( "Substitute" );
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