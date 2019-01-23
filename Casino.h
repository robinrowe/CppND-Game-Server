// Casino.h 
// Created by Robin Rowe 2019-01-23
// License MIT open source

#ifndef Casino_h
#define Casino_h

class Casino
{	Casino(const Casino&) = delete;
	void operator=(const Casino&) = delete;

public:
	~Casino()
	{}
	Casino()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
