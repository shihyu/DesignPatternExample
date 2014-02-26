#ifndef	_HFDP_CPP_VISITOR_SALAD_HPP_
#define _HFDP_CPP_VISITOR_SALAD_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Salad : public IngredientDecorator {

	private: std::auto_ptr< Stock > _base;
	private: std::string _description;

	public: explicit Salad( std::string description, Ingredient* ingredient, Stock* base) :
		_description( description ), _base( base ), IngredientDecorator( ingredient ) { assert( base );
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return _ingredient->getCalories() + _base->getCalories();
	};
	public: float getCarbs() const {
		return _ingredient->getCarbs() + _base->getCarbs();
	};
	public: float getProtien() const {
		return _ingredient->getProtien() + _base->getProtien();
	}
	public: float getFat() const {
		return _ingredient->getFat() + _base->getFat();
	}
	public: float getCholesterol() const {
		return _ingredient->getCholesterol() + _base->getCholesterol();
	}
	public: float getSodium() const {
		return _ingredient->getSodium() + _base->getSodium();
	}
	public: bool isVegetarian() const {
		return _ingredient->isVegetarian();
	}
	public: std::string toString() const {
		return _description;
	}
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif