#include "pch.h"
#include "FlyingCarpet.h"

FlyingCarpet::FlyingCarpet(int newDistance, int newSpeed) : AirTransport(newDistance, newSpeed){ }

int FlyingCarpet::getSpeed() const { return 10; }

int FlyingCarpet::countNewDistance(int distance)
{
	if (distance <= 0) { return 0; }
	if (distance >= 1000 && distance < 5000) { return distance * (1 - 0.03); }
	else if (distance >= 5000 && distance < 10000) { return distance * (1 - 0.10); }
	else if (distance >= 10000){ return distance * (1 - 0.05); }
	else { return distance; }
		
}

int FlyingCarpet::countResultTime(int distance)
{
	int speed = getSpeed();
	int newDistance = countNewDistance(distance);
	if (newDistance <= 0) { return 0; }
	return newDistance / speed;
}

FlyingCarpet::~FlyingCarpet(){}