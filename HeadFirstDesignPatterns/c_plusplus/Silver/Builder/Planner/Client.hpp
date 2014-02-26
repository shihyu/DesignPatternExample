#ifndef	_HFDP_CPP_BUILDER_CLIENT_HPP_
#define _HFDP_CPP_BUILDER_CLIENT_HPP_

namespace HeadFirstDesignPatterns {
namespace Builder {

class Client {

	private: std::auto_ptr< VacationBuilder > _builder;

	private: Client( const Client& ); // Disable copy constructor
	private: void operator=( const Client& ); // Disable assignment operator

	public: explicit Client ( VacationBuilder* builder ) :
		_builder( builder ) { assert( builder );
	}
	public: Vacation* constructPlanner() {
		time_t now = time( 0 );
		tm local = *( localtime( &now ) );
	
		do {
			std::cout << std::endl << "Enter vacation date (YYYY MM DD) where..." << std::endl;
			std::cout << "YYYY=2006, 2007, etc..., MM=1-12, DD=1-31, separated by spaces" << std::endl;
			std::cout << "YYYY MM DD" << std::endl;
			std::cin >> local.tm_year >> local.tm_mon >> local.tm_mday;

			local.tm_year -= 1900;
			local.tm_mon  -= 1;

			_builder->buildDay( local );

			switch( promptUser( "hotel? (0=No, 1=Grand Facadion, 2=Nostalgic Momento)" ) ) {
				case 1: {
					_builder->addHotel( hotelGrandFacadion );
				} break;
				case 2: {
					_builder->addHotel( hotelNostalgicMomento );
				} break;
			}

			switch( promptUser( "Park tickets? (0=No, 1=Yes)" ) ) {
				case 1: {
					_builder->addTickets( ticketPark );
				} break;
			}

			switch( promptUser( "Dinner Reservations? (0=No, 1=Pancake House, 2=Objectville Diner)" ) ) {
				case 1: {
					_builder->addReservations( dinnerPancakeHouse.c_str() );
				} break;
				case 2: {
					_builder->addReservations( dinnerObjectvilleDiner.c_str() );
				} break;
			}

			switch( promptUser( "Special Events? (0=No, 1=Choc-O-Holic factory tour, 2=Pizza factory tour)" ) ) {
				case 1: {
					_builder->addSpecialEvent( specialChocolateFactoryTour.c_str() );
				} break;
				case 2: {
					_builder->addSpecialEvent( specialPizzaFactoryTour.c_str() );
				} break;
			}
		} while( promptUser( "Would you like to plan another day? (0=No, 1=Yes)" ) == 1 );

		return _builder->getVacationPlanner();
	}
	private: int promptUser( const std::string prompt ) {
		int value = 0;
		std::cout << prompt << std::endl;
		std::cin  >> value;
		return value;
	}
};

} // namespace Builder
} // namespace HeadFirstDesignPatterns

#endif
