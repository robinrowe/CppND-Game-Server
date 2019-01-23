// Chip.h 
// Created by Robin Rowe 2019-01-23
// License MIT open source

#ifndef Chip_h
#define Chip_h

class Chip
{	Chip(const Chip&) = delete;
	void operator=(const Chip&) = delete;

public:
	~Chip()
	{}
	Chip()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
