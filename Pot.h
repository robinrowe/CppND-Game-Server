// Pot.h 
// Created by Robin Rowe 2019-01-23
// License MIT open source

#ifndef Pot_h
#define Pot_h

class Pot
{	Pot(const Pot&) = delete;
	void operator=(const Pot&) = delete;

public:
	~Pot()
	{}
	Pot()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
