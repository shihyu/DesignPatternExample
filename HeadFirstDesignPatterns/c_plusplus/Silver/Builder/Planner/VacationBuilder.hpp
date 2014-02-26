#ifndef	_HFDP_CPP_BUILDER_VACATION_BUILDER_HPP_
#define _HFDP_CPP_BUILDER_VACATION_BUILDER_HPP_

#include "Planner.hpp"

namespace HeadFirstDesignPatterns {
namespace Builder {

class VacationBuilder : public Builder {

	private: Event _vacation;
	private: EventComponent* _currentDay;
	private: EventComponent* _currentEvent;

	public: VacationBuilder() :
		_vacation( "Vacation Itinerary", "All events" ), 
		_currentDay( 0 ), 
		_currentEvent( 0 ) {
		std::cout << std::endl << "Welcome to Patternsland Vacation Planner!" << std::endl;
	}
	public: ~VacationBuilder() {
		std::cout << std::endl << "Goodbye and have a dreamy vacation!" << std::endl;
	}
	public: void buildDay( const tm& date ) {
		_currentDay = _vacation.add( new Day( new Event( "Day", itos( _vacation.getChildCount() + 1 ).c_str() ), date ) );
		_currentEvent = _currentDay;
	}
	public: void addHotel( const std::string& hotel ) { assert( _currentDay );
		if( hotel.compare( hotelGrandFacadion ) == 0 ) {
			_currentDay->add( new EventItem( "Hotel", hotelGrandFacadion.c_str(), 399.0 ) );
		}
		else if( hotel.compare( hotelNostalgicMomento ) == 0 ) {
			_currentDay->add( new EventItem( "Hotel", hotelNostalgicMomento.c_str(), 199.0 ) );
		}
	}
	public: void addTickets( const std::string& event ) { assert( _currentEvent );
		if( event.compare( ticketPark.c_str() ) == 0 ) {
			_currentEvent->add( new EventItem( "Tickets", ticketPark.c_str(), 75.0 ) );
		}
		else if( event.compare( ticketPatternsOnIce.c_str() ) == 0 ) {
			_currentEvent->add( new EventItem( "Tickets", ticketPatternsOnIce.c_str(), 45.0 ) );
		}
		else if( event.compare( ticketCirqueDuPatterns.c_str() ) == 0 ) {
			_currentEvent->add( new EventItem( "Tickets", ticketCirqueDuPatterns.c_str(), 60.0 ) );
		}
	}
	public: void addReservations( const std::string& event ) { assert( _currentDay);
		_currentEvent = _currentDay->add( new Event( "Reservation", "Dinner" ) );
		_currentEvent->add( new EventItem( event.c_str(), "" ) );
	}
	public: void addSpecialEvent( const std::string& event ) { assert( _currentDay);
		_currentEvent = _currentDay->add( new Event( "Reservation", "Special event" ) );
		if( event.compare( specialChocolateFactoryTour.c_str() ) == 0 ) {
			_currentEvent->add( new EventItem( "Tickets", specialChocolateFactoryTour.c_str(), 45.0 ) );
		}
		else if( event.compare( specialPizzaFactoryTour.c_str() ) == 0 ) {
			_currentEvent->add( new EventItem( "Tickets", specialPizzaFactoryTour.c_str(), 25.0 ) );
		}	
	}
	public: Vacation* getVacationPlanner() {
		return new Vacation( _vacation );
	};
};

} // namespace Builder
} // namespace HeadFirstDesignPatterns

#endif
