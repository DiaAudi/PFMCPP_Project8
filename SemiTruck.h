#pragma once
#include "Vehicle.h"


struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& k);
    virtual ~SemiTruck();
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);
    void pullOver();
    void laneChange();

};

