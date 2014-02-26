#ifndef	_HFDP_CPP_VISITOR_MENUS_MENU_COMPONENT_HPP_
#define _HFDP_CPP_VISITOR_MENUS_MENU_COMPONENT_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class MenuComponent {

	private: MenuComponent( const MenuComponent& ); // Disable copy constructor
	private: void operator=( const MenuComponent& ); // Disable assignment operator

	public: MenuComponent() {
	}
	public: virtual ~MenuComponent() = 0 {
	}
	public: virtual void accept( Visitor* visitor ) = 0;
	public: virtual void add( MenuComponent* menuComponent ) {
	};
	public: virtual float getHealthRating() const  = 0;
	public: virtual std::string toString() const = 0;
	public: virtual bool isVegetarian() const = 0;
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
