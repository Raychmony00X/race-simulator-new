#include "pch.h"
#include "FastCamel.h"

FastCamel::FastCamel(int newDistance, int newSpeed, int newMovementTime) : GroundTransport(newDistance, 
	newSpeed, newMovementTime){ }

int FastCamel::getSpeed() const { return 40; }

int FastCamel::getMovementTime() const { return 10; }

int FastCamel::countResultTime(int distance)
{
	int speed = getSpeed();
	int movementTime = getMovementTime();

	if (distance <= 0) { return 0; }
	int distanceTime = distance / speed;

	if (distanceTime <= 0) { return 0; }
	int stops = distanceTime / movementTime;

	int restTime = 0;
	if (stops == 1) restTime = 5;
	else if (stops == 2) restTime = 5 + 6.5;
	else if (stops > 2) restTime = 5 + 6.5 + (stops - 2) * 8;

	return distanceTime + restTime;
}

FastCamel::~FastCamel(){}

