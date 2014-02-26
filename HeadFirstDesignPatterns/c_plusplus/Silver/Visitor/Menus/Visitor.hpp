#ifndef	_HFDP_CPP_VISITOR_VISITOR_HPP_
#define _HFDP_CPP_VISITOR_VISITOR_HPP_

namespace HeadFirstDesignPatterns {
namespace Visitor {
namespace Menus {

class Ingredient;
class MenuItem;
class Menu;

class Visitor {

	protected: explicit Visitor() {
	}
	public: virtual ~Visitor() = 0 {
	}
	public: virtual void visit( Menu* component ) = 0;
	public: virtual void visit( MenuItem* component ) = 0;
	public: virtual void visit( Ingredient* component ) = 0;
};

} // namespace Menus
} // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif