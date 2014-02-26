#ifndef	_HFDP_CPP_BUILDER_PLANNER_HPP_
#define _HFDP_CPP_BUILDER_PLANNER_HPP_

#include "../../Standard.h"

static const std::string hotelGrandFacadion( "Grand Facadion" );
static const std::string hotelNostalgicMomento( "Nostalgic Momento" );
static const std::string ticketPark( "Park tickets" );
static const std::string ticketPatternsOnIce( "Patterns On Ice" );
static const std::string ticketCirqueDuPatterns( "Cirque Du Patterns" );
static const std::string dinnerObjectvilleDiner( "Objectville Diner" );
static const std::string dinnerPancakeHouse( "Pancake House" );
static const std::string specialChocolateFactoryTour( "Choc-O-Holic factory tour" );
static const std::string specialPizzaFactoryTour( "Pizza factory tour" );

// convert int to string the C++ way
std::string itos( int i )	{
	std::stringstream value;
	value << i;
	return value.str();
}

#include "EventException.hpp"
#include "EventComponent.hpp"
#include "Event.hpp"
#include "EventItem.hpp"
#include "Day.hpp"

#include "Vacation.hpp"

#include "Builder.hpp"
#include "VacationBuilder.hpp"

#include "Client.hpp"

#endif
