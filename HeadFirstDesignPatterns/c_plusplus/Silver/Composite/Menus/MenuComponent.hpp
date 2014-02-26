#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_

namespace HeadFirstDesignPatterns {
namespace Composite {
namespace Menus {

class MenuComponent {

	private: MenuComponent( const MenuComponent& ); // Disable copy constructor
	private: void operator=( const MenuComponent& ); // Disable assignment operator

	public: MenuComponent() {
	}
	public: virtual ~MenuComponent() = 0 {
	}
	public: virtual void add( MenuComponent* menuComponent ) {
		throw new UnsupportedOperationException();
	}
	public: virtual void remove( MenuComponent* menuComponent ) {
		throw new UnsupportedOperationException();
	}
	public: virtual const MenuComponent* getChild( int i ) const {
		throw new UnsupportedOperationException();
	}
	public: virtual std::string getName() const {
		throw new UnsupportedOperationException();
	}
	public: virtual std::string getDescription() const {
		throw new UnsupportedOperationException();
	}
	public: virtual double getPrice() const {
		throw new UnsupportedOperationException();
	}
	public: virtual bool isVegetarian() const {
		throw new UnsupportedOperationException();
	}
	public: virtual void print() const {
		throw new UnsupportedOperationException();
	}
};

} // namespace Menus
} // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
