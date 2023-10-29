#ifndef TrafficLight_H
#define TrafficLight_H

enum lightColor
{
  RED,
  YELLOW,
  GREEN
};

class TrafficLight
{
  private:
    lightColor currentState;

  public:
    TrafficLight();
    ~TrafficLight();

    void printState();
    void changeState();
    void changeState(lightColor);
    lightColor getState();
};

#endif