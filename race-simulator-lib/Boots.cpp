#include "pch.h"
#include "Boots.h"

Boots::Boots(int newDistance, int newSpeed, int newMovementTime) : GroundTransport(newDistance,
	newSpeed, newMovementTime) { }

int Boots::getSpeed() const { return 6; }

int Boots::getMovementTime() const { return 60; }

int Boots::countResultTime(int distance)
{
	int speed = getSpeed();
	int movementTime = getMovementTime();

	if (distance <= 0) { return 0; }
	int distanceTime = distance / speed;

	if (distanceTime <= 0) { return 0; }
	int stops = distanceTime / movementTime;

	int restTime = 0;
	if (stops == 1) restTime = 10;
	else if (stops > 1) restTime = 10 + (stops - 1) * 5;

	return distanceTime + restTime;
}

Boots::~Boots(){}