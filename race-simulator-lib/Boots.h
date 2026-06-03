#pragma once

#include "GroundTransport.h"


class Boots : public GroundTransport
{
public:
	Boots(int newDistance, int newSpeed, int newMovementTime);

	int getSpeed() const override;

	int getMovementTime() const override;

	int countResultTime(int distance);

	~Boots();
};
