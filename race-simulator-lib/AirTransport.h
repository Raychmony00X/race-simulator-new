#pragma once

#include "Race.h"

class AirTransport : public Race
{
public:
	AirTransport(int newDistance, int newSpeed);

	virtual int getSpeed() const;

	~AirTransport() override;
protected:
	int speed_;

};