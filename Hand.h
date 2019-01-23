// Hand.h 
// Created by Robin Rowe 2019-01-23
// License MIT open source

#ifndef Hand_h
#define Hand_h

class Hand
{	Hand(const Hand&) = delete;
	void operator=(const Hand&) = delete;

public:
	~Hand()
	{}
	Hand()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
