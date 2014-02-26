#include "Menus.hpp"
#include <process.h>

using namespace HeadFirstDesignPatterns::Visitor::Menus;

int main( int argc, char* argv[] ) {

	std::auto_ptr< MenuComponent > pancakeHouseMenu(
		new Menu( "PANCAKE HOUSE MENU", "Breakfast" )
	);
	std::auto_ptr< MenuComponent > dinerMenu(
		new Menu( "DINER MENU", "Lunch" )
	);
	std::auto_ptr< MenuComponent > cafeMenu(
		new Menu( "CAFE MENU", "Snacks" )
	);
	std::auto_ptr< MenuComponent > dessertMenu(
		new Menu( "DESSERT MENU", "Dessert of course!" )
	);
	std::auto_ptr< MenuComponent > coffeeMenu(
		new Menu( "COFFEE MENU", "Stuff to go with your afternoon coffee" )
	);
	std::auto_ptr< MenuComponent > allMenus(
		new Menu( "ALL MENUS", "All menus combined" )
	);

	allMenus->add( pancakeHouseMenu.get() );
	allMenus->add( dinerMenu.get() );
	allMenus->add( cafeMenu.get() );

	MenuItem* menuItem = 0;

	menuItem = new MenuItem( "K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", 2.99 );
	menuItem->add( new Scrambled( new Egg( 2.0f ), new Butter( 1.0f ) ) );
	menuItem->add( new Bread( 2.0f ) );
	menuItem->add( new Pancake ( 6.0f ) );

	pancakeHouseMenu->add( menuItem );

	menuItem = new MenuItem( "Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", 2.99 );
	menuItem->add( new Fried( new Egg( 2.0f ), new Oil( 1.0f ) ) );
	menuItem->add( new Bread( 2.0f ) );
	menuItem->add( new Pancake( 6.0f ) );
	menuItem->add( new Sausage( 2.0f ) );

	pancakeHouseMenu->add( menuItem );

	menuItem = new MenuItem( "Blueberry Pancakes", "Pancakes made with fresh blueberries, and blueberry syrup",	3.49 );
	menuItem->add( new Pancake( 12.0f )	);
	menuItem->add( new BlueBerries( 1.0f ) );

	pancakeHouseMenu->add( menuItem );

	menuItem = new MenuItem( "BLT", "Bacon with lettuce & tomato on whole wheat", 2.99 );
	menuItem->add( new Bacon( 2.0f ) );
	menuItem->add( new Lettus( 1.0f ) );
	menuItem->add( new Tomato( 1.0f ) );
	menuItem->add( new Bread( 2.0f ) );

	dinerMenu->add( menuItem );

	menuItem = new MenuItem( "Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", 2.99 );
	menuItem->add( new Substitute( new Bacon( 2.0f ) ) );
	menuItem->add( new Lettus( 1.0f ) );
	menuItem->add( new Tomato( 1.0f ) );
	menuItem->add( new Bread( 2.0f ));

	dinerMenu->add( menuItem );

	menuItem = new MenuItem( "Soup of the day", "A bowl of the soup of the day, with a side of potato salad", 2.99 );
	srand( _getpid() );
	switch( rand() % 6 ) {
		case 0: {	//  sunday
			menuItem->add( new Soup( "Potato soup", new Potato( 1.0f ), new Stock( new Milk( 1.0f ), 1.0f ) ) );
		} break;
		case 1: {	// monday
			menuItem->add( new Soup( "Minnestrone soup", new MixedVegetables( 1.0f ), new Stock( new Chicken( 0.5f ), 0.5f ) ) );
		} break;
		case 2: {	// tuesday
			menuItem->add( new Soup( "Tomato soup", new Tomato( 1.0f ), new Stock( new Tomato( 1.0f ), 0.5f ) )	);
		} break;
		case 3: {	// wednsday
			menuItem->add( new Soup( "Beef barley soup", new Beef( 1.0f ), new Stock( new Beef( 1.0f ), 0.5f ) ) );
		} break;
		case 4: {	// thursday
			menuItem->add( new Soup( "Chicken noodle soup", new Pasta( 1.0f ), new Stock( new Chicken( 1.0f ), 0.25f ) ) );
		} break;
		case 5: {	// friday
			menuItem->add( new Soup( "Fish soup", new Fish( 1.0f ), new Stock( new Fish( 1.0f ), 0.5f ) ) );
		} break;
		default: {	// saturday
			menuItem->add( new Soup( "Rice soup", new Rice( 1.0f ), new Stock( new Beef( 0.5f ), 0.5f ) ) );
		} break;
	}
	menuItem->add( new Salad( "Potato salad", new Mayonnaise( 1.0f ), new Stock( new Potato( 1.0 ), 1.0f ) ) );

	dinerMenu->add( menuItem );

	menuItem = new MenuItem( "Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese",	3.05 );
	menuItem->add( new Hotdog( 1.0f ) );
	menuItem->add( new Bread( 2.0f ) );
	menuItem->add( new Sauerkraut( 1.0f ) );
	menuItem->add( new Cheese( 1.0f ) );

	dinerMenu->add( menuItem );

	menuItem = new MenuItem( "Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", 3.99 );
	menuItem->add( new Steamed( new MixedVegetables( 2.0f) ) );
	menuItem->add( new Rice( 1.0f ) );

	dinerMenu->add( menuItem );

	menuItem = new MenuItem( "Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", 3.89 );
	menuItem->add( new Pasta( 1.0f ) );
	menuItem->add( new Tomato( 1.0f ) );
	menuItem->add( new Bread( 1.0f ) );

	dinerMenu->add( menuItem );
	dinerMenu->add( dessertMenu.get() );

	menuItem = new MenuItem( "Ice Cream", "A scoop of vanilla icecream with blueberry topping", 1.89 );
	menuItem->add( new Milk( 1.0f ) );
	menuItem->add( new BlueBerries( 1.0f ) );

	dessertMenu->add( menuItem );

	menuItem = new MenuItem( "Bagel", "Flavors include sesame, poppyseed and cinnamon raisin", 0.69	);
	menuItem->add( new Bagel( 1.0f ) );

	cafeMenu->add( menuItem );

	std::cout.setf( std::ios::showpoint );
	std::cout.setf( std::ios::fixed );
	std::cout.precision( 2 );

	std::auto_ptr< Waitress > waitress(	new Waitress(allMenus.get() ) );
	waitress->printMenu();

	return 0;
}