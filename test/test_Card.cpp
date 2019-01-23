// test_Card.cpp 
// Created by Robin Rowe 2019-01-23
// License MIT MIT open source

#include <stdio.h>
#include "../Card.h"

int main(int argc,char* argv[])
{	puts("Print Card");
	Card x(2,1,true);
	x.Print();
	puts("");
	puts("\nDone!");
	return 0;
}
