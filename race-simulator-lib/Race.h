#pragma once

class Race
{
public:
	Race(int newDistance);

	int getDistance() const;

	virtual ~Race();

protected:
	int distance_;
};