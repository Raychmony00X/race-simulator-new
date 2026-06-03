#pragma once

#include "Race.h"

class GroundTransport : public Race
{
public:
	GroundTransport(int newDistance, int newSpeed, int newMovementTime);

	virtual int getSpeed() const;
	
	virtual int getMovementTime() const;

	~GroundTransport() override;

protected:
	int speed_, movementTime_;
};