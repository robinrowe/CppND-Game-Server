// Card.h 
// Created by Robin Rowe 2019-01-23
// License MIT open source

#ifndef Card_h
#define Card_h

#include <stdio.h>

class Card
{	Card(const Card&) = delete;
	void operator=(const Card&) = delete;
public:
	char rank;
	char suit;
	bool isFaceUp;
	~Card()
	{}
	Card()
	:	rank(0)
	,	suit(0)
	,	isFaceUp(false)	
	{}
	Card(char rank,char suit,bool isFaceUp = false)
	:	rank(rank)
	,	suit(suit)
	,	isFaceUp(isFaceUp)	
	{}
	bool operator!() const
	{	return !rank;
	}
	
	void Print() const
	{	if(isFaceUp)
		{	const char* ranks="  23456789TJQKA";
			const char* suits = " chds";
			printf("%c%c",ranks[rank],suits[suit]);
		}
	}
};

#endif
