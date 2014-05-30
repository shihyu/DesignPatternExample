#include <iostream>
#include "Light.h"

using namespace std;

Light::Light(void) {
}

Light::~Light(void) {
}

void Light::on() {
    cout << "Light is On" << endl;
}

void Light::off() {
    cout << "Light is Off" << endl;
}