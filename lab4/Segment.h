#pragma once
#include <iostream>
#include<fstream>
using namespace std;
class Segment
{
protected:
	float T;// koefTezine;
	float L;// koefLepote;
	float K;//ukupanKoef
	char* naziv;
public:
	Segment(); 
	Segment(char* nazivS);
	virtual ~Segment();
	virtual int racKoefTezine() = 0;
	virtual  int racKoefLepote() = 0;
	virtual int ukupanKoef() = 0;//dodato
	virtual void prikaz(ostream&) = 0;
};


