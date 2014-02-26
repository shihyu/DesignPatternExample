#ifndef	_HFDP_CPP_VISITOR_SCRAMBLED_HPP_
#define _HFDP_CPP_VISITOR_SCRABLED_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Scrambled : public IngredientDecorator {

	private: std::auto_ptr< Ingredient > _fat;

	public: explicit Scrambled( Ingredient* ingredient, Ingredient* fat ) :
		_fat( fat ), IngredientDecorator( ingredient ) { assert( ingredient ); assert( fat );
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return _ingredient->accept( visitor );
	}
	public: float getCalories() const {
		return _ingredient->getCalories() + _fat->getCalories();
	};
	public: float getCarbs() const {
		return _ingredient->getCarbs() + _fat->getCarbs();
	};
	public: float getProtien() const {
		return _ingredient->getProtien() + _fat->getProtien();
	}
	public: float getFat() const {
		return _ingredient->getFat() + _fat->getFat();
	}
	public: float getCholesterol() const {
		return _ingredient->getCholesterol() + _fat->getCholesterol();
	}
	public: float getSodium() const {
		return _ingredient->getSodium() + _fat->getSodium();
	}
	public: bool isVegetarian() const {
		return _ingredient->isVegetarian(); // no effect
	}
	public: std::string toString() const {
		std::string result( "Scrambled" );
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