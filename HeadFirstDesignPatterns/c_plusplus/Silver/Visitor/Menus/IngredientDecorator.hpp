#ifndef	_HFDP_CPP_VISITOR_INGREDIENT_DECORATOR_HPP_
#define _HFDP_CPP_VISITOR_INGREDIENT_DECORATOR_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class IngredientDecorator : public Ingredient{
	
	protected: std::auto_ptr< Ingredient > _ingredient;

	protected: explicit IngredientDecorator( Ingredient* ingredient ) :
		_ingredient( ingredient ) { assert( ingredient );
	}
	public: virtual ~IngredientDecorator() {
	}

	private: IngredientDecorator( const IngredientDecorator& ); // Disable copy constructor
	private: void operator=( const IngredientDecorator& ); // Disable assignment operator
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif