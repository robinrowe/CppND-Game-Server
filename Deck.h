// Deck.h 
// Created by Robin Rowe 2019-01-23
// License MIT open source

#ifndef Deck_h
#define Deck_h

class Deck
{	Deck(const Deck&) = delete;
	void operator=(const Deck&) = delete;

public:
	~Deck()
	{}
	Deck()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
