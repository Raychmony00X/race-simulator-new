#include "pch.h"
#include "AirTransport.h"

AirTransport::AirTransport(int newDistance, int newSpeed) : Race(newDistance), speed_(newSpeed){ }

int AirTransport::getSpeed() const { return speed_; }

AirTransport::~AirTransport(){}