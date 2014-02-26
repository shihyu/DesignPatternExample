#ifndef	_HFDP_CPP_OBSERVER_WEATHER_STATION_HPP_
#define _HFDP_CPP_OBSERVER_WEATHER_STATION_HPP_

#include "../Standard.h"

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "Subject.hpp"
#include "WeatherData.hpp"
#include "ForecastDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "CurrentConditionsDisplay.hpp"

// uncomment the following #define to include Heat Index
#define _HEAT_INDEX_DISPLAY_

#ifdef _HEAT_INDEX_DISPLAY_
#include "HeatIndexDisplay.hpp"
#endif

#endif