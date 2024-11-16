#include "Segment.h"
#include <string.h>


Segment::Segment()
{
	naziv = 0;
	T = 0;
	L = 0;
}
Segment::Segment(char* nazivS)
{
	T = rand() % 100;
	L = rand() % 100;
	naziv = new char[strlen(nazivS) + 1];
	strcpy(naziv, nazivS);
	
}

Segment::~Segment()
{
	if(naziv!=nullptr)
	delete[] naziv;
	naziv = 0;
}
