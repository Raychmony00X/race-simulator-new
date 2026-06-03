#include "pch.h"
#include "Camel.h"

Camel::Camel(int newDistance, int newSpeed, int newMovementTime) : GroundTransport(newDistance, 
	newSpeed, newMovementTime) { }

int Camel::getSpeed() const { return 10; }

int Camel::getMovementTime() const { return 30; }

int Camel::countResultTime(int distance)
{
	int speed = getSpeed();
	int movementTime = getMovementTime();

	if(distance <= 0) { return 0; }
    int distanceTime = distance / speed;
	
	if (distanceTime <= 0) { return 0; }
	int stops = distanceTime / movementTime;
	
	int restTime = 0;
	if (stops == 1) restTime = 5;
	else if (stops > 1) restTime = 5 + (stops - 1) * 8;
    
	return distanceTime + restTime;
}

Camel::~Camel(){}