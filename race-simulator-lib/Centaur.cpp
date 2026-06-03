#include "pch.h"
#include "Centaur.h"

Centaur::Centaur(int newDistance, int newSpeed, int newMovementTime) : GroundTransport(newDistance,
	newSpeed, newMovementTime) { }

int Centaur::getSpeed() const { return 15; }

int Centaur::getMovementTime() const { return 8; }

int Centaur::countResultTime(int distance)
{
	int speed = getSpeed();
	int movementTime = getMovementTime();

	if (distance <= 0) { return 0; }
	int distanceTime = distance / speed;

	if (distanceTime <= 0) { return 0; }
	int stops = distanceTime / movementTime;

	int restTime = 0;
	if (stops >= 1) restTime = stops * 2;

	return distanceTime + restTime;
}

Centaur::~Centaur(){}