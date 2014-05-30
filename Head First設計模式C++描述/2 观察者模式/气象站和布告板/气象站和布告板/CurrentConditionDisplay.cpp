#include "CurrentConditionDisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(Subject* w) {
    weatherData = w;
    weatherData ->registerObserver(this);
}

void CurrentConditionDisplay::update(float temp, float humidity, float pressure) {
    this->temperature = temp;
    this->humidity = humidity;
    display();
}

void CurrentConditionDisplay::display() {
    cout << "Current conditions: " << temperature
         << "F degrees and " << humidity << "% humidity" << endl;
}

CurrentConditionDisplay::~CurrentConditionDisplay(void) {
}
