#pragma once

#include "GroundTransport.h"

class Centaur : public GroundTransport
{
public:
	Centaur(int newDistance, int newSpeed, int newMovementTime);

	int getSpeed() const override;

	int getMovementTime() const override;

	int countResultTime(int distance);

	~Centaur() override;

};