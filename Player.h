// Player.h 
// Created by Robin Rowe 2019-01-23
// License MIT open source

#ifndef Player_h
#define Player_h

class Player
{	Player(const Player&) = delete;
	void operator=(const Player&) = delete;

public:
	~Player()
	{}
	Player()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
