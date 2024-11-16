#pragma once
#include "Segment.h"
class More: public Segment
{
private:
	float P;//Povrsina
	float S;//stepen plavetnila
	int MSV;//maksimalna snaga vetra,opseg 0-12
public:
	More(float p, float s, int msv, char* nazivS);//naziv segmenta
	virtual int racKoefTezine();
	virtual  int racKoefLepote();
	virtual  int ukupanKoef();
	void prikaz(ostream& out);
	friend istream& operator>>(istream& in, More& m);//istream in
};

