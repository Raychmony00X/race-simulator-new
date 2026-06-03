#include "pch.h"
#include "Eagle.h"

Eagle::Eagle(int newDistance, int newSpeed) : AirTransport(newDistance, newSpeed) {}

int Eagle::getSpeed() const { return 8; }

int Eagle::countNewDistance(int distance)
{ 
	if (distance <= 0) { return 0; } 
	return distance * (1 - 0.06);
}

int Eagle::countResultTime(int distance )
{
	int speed = getSpeed();
	int newDistance = countNewDistance(distance);
	if (distance <= 0) { return 0; }
	return newDistance / speed;

}

Eagle::~Eagle(){}