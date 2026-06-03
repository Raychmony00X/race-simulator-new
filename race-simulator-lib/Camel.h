#pragma once

#include "GroundTransport.h"

class Camel : public GroundTransport
{
public:
	Camel(int newDistance, int newSpeed, int newMovementTime);

	int getSpeed() const override;

    int getMovementTime() const override;

	int countResultTime(int distance);

	~Camel() override;
};