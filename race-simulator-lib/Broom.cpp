#include "pch.h"
#include "Broom.h"

Broom::Broom(int newDistance, int newSpeed) : AirTransport(newDistance, newSpeed){ }

int Broom::getSpeed() const { return 20; }

int Broom::countNewDistance(int distance)
{
	if (distance <= 0) { return 0; }
	int index = distance / 1000;
	return 1000 * (1 - (index / 100));

}

int Broom::countResultTime(int distance)
{
	int speed = getSpeed();
	int newDistance = countNewDistance(distance);
	if (newDistance <= 0) { return 0; }
	return newDistance / speed;

}

Broom::~Broom(){}
