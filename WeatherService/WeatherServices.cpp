#include "pugixml.hpp"
#include "XmlService.h"
#include "Weather.h"
#include "Service.h"
#include "JsonService.h"
#include <iostream>

int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
}

