#pragma once
#include "Segment.h"
class Bara : public Segment
{
private:
	float P;//Povrsina
	float S;//stepen plavetnila
	int zamucenost;//zamucenost,opseg 0-12
public:
	Bara(float p, float s, int zam, char* nazivS);//naziv segmenta
	virtual int racKoefTezine();
	virtual  int racKoefLepote();
	virtual  int ukupanKoef();
	void prikaz(ostream& out);
	friend istream& operator>>(istream& in, Bara& m);
};


