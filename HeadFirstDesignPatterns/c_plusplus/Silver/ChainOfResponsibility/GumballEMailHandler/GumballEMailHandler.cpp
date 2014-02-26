#include "GumballEMailHandler.hpp"

using namespace HeadFirstDesignPatterns::ChainOfResponsibility::GumballEMailHandler;

const char* email [] = {
	"You guys really razz my berries, your gumball machines are totally hip",
	"Cruisin for a bruisin? My kids lost their money trying to win gumballs!", 
	"You guys make me frosted, you've got four year olds gambling now!",
	"Mighty Gumball machines are radioactive, keep up the good work!",
	"Mighty Gumball machines are a blast, I can't wait to see whats cooking next",
	"You guys got it made in the shade, these gumball machines are a kick",
	"Mighty Gumball machines are no where daddy-o",
	"Don't have a cow, but your gumball machines really rattle my cage",
	"What's your tale nightingale? slot machine arms on soda machines?!",
	"Wanna make some real bread?! build gumball machines in your home",
	"Grody? got cooties? call Freeman & Freeman, and you'll be in fat city", 
	"What's buzzin cuzzin? Make some reals scratch delivering pizzas",
	"You guys are boss! I flip when I see those gumballs drop",
	"Mighty Gumball Inc. is in orbit, we love you guys!",
	"Your gumball machines really make the scene",
	"Cast an eyeball on this beauty",
	"We want gumball machines in all our stores!, sincerly Starbuzz"
};

int main( int argc, char* argv[] ) {

	std::auto_ptr< Client > client( new Client() );

	for( int i = 0; i < sizeof( email ) / sizeof( char* ); i++ ) {
		client->handleRequest( email[i] );
	}

	client->print();

	return 0;
}
