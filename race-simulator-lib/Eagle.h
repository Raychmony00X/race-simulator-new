#pragma once

#include "AirTransport.h"

class Eagle : public AirTransport
{
public:
	Eagle(int newDistance, int newSpeed);

	int getSpeed() const override;

	int countNewDistance(int distance);

	int countResultTime(int distance);

	~Eagle() override;
};