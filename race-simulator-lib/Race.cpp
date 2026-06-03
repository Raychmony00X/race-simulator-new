#include "pch.h"
#include "Race.h"

Race::Race(int newDistance) :distance_(newDistance){}

int Race::getDistance() const { return distance_; }

Race::~Race(){}