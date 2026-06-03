#pragma once

#include "AirTransport.h"


class Broom : public AirTransport
{
public:
	Broom(int newDistance, int newSpeed);

	int getSpeed() const override;

	int countNewDistance(int distance);

	int countResultTime(int distance);

	~Broom() override;
};