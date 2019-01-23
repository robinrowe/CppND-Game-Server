// Dealer.h 
// Created by Robin Rowe 2019-01-23
// License MIT open source

#ifndef Dealer_h
#define Dealer_h

class Dealer
{	Dealer(const Dealer&) = delete;
	void operator=(const Dealer&) = delete;

public:
	~Dealer()
	{}
	Dealer()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
