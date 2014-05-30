#include "Beverage.h"

Beverage::Beverage(void): description("Unknown Beverage")
{
}

string Beverage::getDescription()
{
	return description;
}

Beverage::~Beverage(void)
{
}
