// Seat.h 
// Created by Robin Rowe 2019-01-23
// License MIT open source

#ifndef Seat_h
#define Seat_h

class Seat
{	Seat(const Seat&) = delete;
	void operator=(const Seat&) = delete;

public:
	~Seat()
	{}
	Seat()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
