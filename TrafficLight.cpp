#include "TrafficLight.h"
#include <iostream>
  using std::cout;
  using std::endl;

TrafficLight::TrafficLight()  // Initialize the light as Red pending further direction
{
  currentState = RED;
}

TrafficLight::~TrafficLight()
{
  // Place Holder for future clean-up needs.
}

void TrafficLight::printState()
{
  if(currentState == RED)
  {
    cout << "The light is RED" << endl;
  }
  else if (currentState == YELLOW)
  {
    cout << "The light is Yellow" << endl;
  }
  else if (currentState == GREEN)
  {
    cout << "The light is Green" << endl;
  }
  else
  {
    cout << "HUH?  How did you even get here?" << endl;
  }
}

void TrafficLight::changeState()
{
  if(currentState == RED)
  {
    currentState = GREEN;
  }
  else if (currentState == YELLOW)
  {
    currentState = RED;
  }
  else if (currentState == GREEN)
  {
    currentState = YELLOW;
  }
}

void TrafficLight::changeState(lightColor newColor)
{
  currentState = newColor;
}

lightColor TrafficLight::getState()
{
  return currentState;
}