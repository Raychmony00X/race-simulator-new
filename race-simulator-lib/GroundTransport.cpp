#include "pch.h"
#include "GroundTransport.h"

GroundTransport::GroundTransport(int newDistance, int newSpeed, int newMovementTime) : Race(newDistance),
speed_(newSpeed), movementTime_(newMovementTime){ }

int GroundTransport::getSpeed() const { return speed_; }

int GroundTransport::getMovementTime() const { return movementTime_; }

GroundTransport::~GroundTransport(){}