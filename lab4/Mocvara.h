#pragma once
#include "Segment.h"
class Mocvara: public Segment//da li ovde treba visestruko nasledjivanje 
{
private:
	float P;//povrsina
	float Z;//stepen zitkosti mulja,opseg 0 do 0.99
	float S;//stepen plavetnila
public:
	Mocvara(float p, float z,float s, char* nazivS);
	virtual int racKoefTezine();
	virtual int racKoefLepote();
	virtual  int ukupanKoef();
	void prikaz(ostream& out);
	friend istream& operator>>(istream& in, Mocvara& m);
};

