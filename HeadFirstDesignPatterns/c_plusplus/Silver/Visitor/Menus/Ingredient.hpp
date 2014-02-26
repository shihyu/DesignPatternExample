#ifndef	_HFDP_CPP_VISITOR_INGREDIENT_HPP_
#define _HFDP_CPP_VISITOR_INGREDIENT_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

// recommended daily values
static const float dailyCalories = 2000.0f;
static const float dailyCarbs = 300.f;
static const float dailyCholesterol = 0.300f;
static const float dailyFat = 65.0f;
static const float dailyProtien = 50.0f;
static const float dailySodium = 2.400f;

class Visitor;

class Ingredient : MenuComponent {

	protected: float _amount;

	protected: Ingredient( float amount = 1.0f ) :
		_amount( amount ) { assert( amount > 0.0f );
	}
	public: virtual ~Ingredient() = 0 {
	}
	public: virtual void add( MenuComponent* menuComponent ) {
	}
	public: virtual void accept( Visitor* visitor ) = 0;
	public: virtual bool isVegetarian() const = 0;
	public: virtual float getCalories() const = 0;
	public: virtual float getCarbs() const = 0;
	public: virtual float getCholesterol() const = 0;
	public: virtual float getFat() const = 0;
	public: virtual float getProtien() const = 0;
	public: virtual float getSodium() const = 0;
	public: virtual float getHealthRating() const {
		float result = 0.0f;
		
		result += getCalories() / dailyCalories;
		result += getCarbs() / dailyCarbs;
		result += getCholesterol() / dailyCholesterol;
		result += getProtien() / dailyProtien;
		result += getSodium() / dailySodium;

		return _amount * ( result * 100.0f );
	}
	public: virtual std::string toString() const = 0;
};

} // namespace Menus
} // namespace Vistor
} // namespace HeadFirstDesignPatterns

#endif
