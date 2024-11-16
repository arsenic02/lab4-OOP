#pragma once
#include "Segment.h"
class Gora: public Segment
{
private:
	float P;//povrsina
	float D;//duzina puta kroz mocvaru
	float V;//relativna razlika izmedju najvise i najnize tacke
	float B;//stepen inverzne posumljenosti,0.01 do 1
public:
	Gora(float p, float d, float v, float b, char* nazivS);
	virtual int racKoefTezine();
	virtual  int racKoefLepote();
	virtual  int ukupanKoef();
	void prikaz(ostream& out);
	friend istream& operator>>(istream& in, Gora& g);
};

