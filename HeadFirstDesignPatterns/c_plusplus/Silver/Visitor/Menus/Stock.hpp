#ifndef	_HFDP_CPP_VISITOR_STOCK_HPP_
#define _HFDP_CPP_VISITOR_STOCK_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Stock : public Ingredient {

	private: std::auto_ptr< Ingredient > _ingredient;
	private: float _factor;	// self=1.0, sauce=1.5, gravy=2.0, broth=0.5

	public: explicit Stock( Ingredient* ingredient, float factor ) :
		_factor( factor ), _ingredient( ingredient ) { assert( ingredient ); assert( factor > 0.0f );
	}
	public: void accept( Visitor* visitor ) { assert( visitor );
		return visitor->visit( this );
	}
	public: float getCalories() const {
		return _factor * _ingredient->getCalories();
	};
	public: float getCarbs() const {
		return _factor * _ingredient->getCarbs();
	};
	public: float getProtien() const {
		return _factor * _ingredient->getProtien();
	}
	public: float getFat() const {
		return _factor * _ingredient->getFat();
	}
	public: float getCholesterol() const {
		return _factor * _ingredient->getCholesterol();
	}
	public: float getSodium() const {
		return _factor * _ingredient->getSodium();
	}
	public: bool isVegetarian() const {
		return _ingredient->isVegetarian();
	}
	public: std::string toString() const {
		std::string result( "Stock" );

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