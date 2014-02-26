// The number of birds migrating to Objective has overwhelmed the Quackologists
// who are complaining that it is hard to keep up because the journaling program
// you wrote is getting sluggish. Quackologists capture birds, categorize them, 
// weight them, tag them, and finally, record them with your program. After hours 
// of drinking coffee at Starbuzz reviewing your design, you realize that some 
// traits are common to each type of bird; its type, the sound it makes and how
// it swims. If only you could isolate the common (intrinsic) traits from the 
// unique (extrinsic) traits, its weight and tag number. Your redesign implements
// the ‘Flyweight’ pattern by creating a single instance for each type of bird and
// each bird contains a reference back to its type.

#include "FowlWeight.hpp"
#include <process.h>

using namespace HeadFirstDesignPatterns::FlyWeight::FowlWeight;

static const int MAX_BIRDS = 100;
static const double MIN_WIEGHT = 0.1;

bool compare( const Bird* lhs, const Bird* rhs )
{
	return lhs->getWeight() < rhs->getWeight();
}

int main( int argc, char* argv[] ) {

	FowlFactory fowlFactory;

//	Create a flock of mixed birds with random weights and tag them with a number

	std::vector<  const Bird* > flock;
	flock.resize( MAX_BIRDS );

	srand( _getpid() );
	for( int i = 0; i < MAX_BIRDS; i++ ) {
		int type = rand() % Fowl::last;
		double weight = (rand() % 100) * MIN_WIEGHT;
		if( weight < MIN_WIEGHT ) {
			weight = MIN_WIEGHT;
		}
		flock[i] = fowlFactory.getBird( type, i, weight );
	}

//	Sort flock by ascending weight and display a journal

	std::sort( flock.begin(), flock.end(), compare );
	std::vector< const Bird* >::const_iterator iterator = flock.begin();

	while( iterator != flock.end() ) {
		std::cout << ( *iterator )->toString().c_str();
		std::cout << ", says \"";
		( *iterator )->quack();
		std::cout << "\" and ";
		( *iterator )->swim();
		std::cout << std::endl;
		iterator++;
	}

	return 0;
}
