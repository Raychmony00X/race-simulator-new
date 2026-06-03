#pragma once

#include "GroundTransport.h"

class FastCamel : public GroundTransport
{
public:
	FastCamel(int newDistance, int newSpeed, int newMovementTime);

	int getSpeed() const override;

	int getMovementTime() const override;

	int countResultTime(int distance);

	~FastCamel() override;
};