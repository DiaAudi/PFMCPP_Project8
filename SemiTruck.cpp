#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << "Hi, officer." << std::endl;
}

void SemiTruck::laneChange()
{
    setSpeed(48);
    std::cout << name << ": blinker " << std::endl;
}



