#pragma once

#include "AirTransport.h"

class FlyingCarpet : public AirTransport
{
public:
	FlyingCarpet(int newDistance, int newSpeed);

	int getSpeed() const override;

	int countNewDistance(int distance);

	int countResultTime(int distance);

	~FlyingCarpet() override;
	
};