#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
	SemiTruck(const std::string& k);
	void pullOver();
	void laneChange();

};
