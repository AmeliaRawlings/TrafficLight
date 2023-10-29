#include "TrafficLight.h"

int main() 
{
    TrafficLight trafficLight;

    for (int i = 0; i < 10; ++i)
    {
        trafficLight.printState();
        trafficLight.changeState();
    }

    return 0;
}