#include "More.h"
#include <string.h>
More::More(float p, float s, int msv, char* nazivS): Segment(nazivS)
{
	P = p;
	S = s;
	MSV = msv;
}
int More::racKoefLepote()
{
	L = MSV * S / P;
	return L;
}
int More::racKoefTezine()
{
	T = MSV * P/(L-1);
	return T;
}
int More::ukupanKoef()
{
	K = T * L;
	return K;
}
void More::prikaz(ostream& izlaz)
{
	izlaz << "More, " << "Ukupan koef: " << ukupanKoef() << " Koef tezine: " << T << " ,Koef lepote: " << L << " ,Povrsina: " << P <<
		" ,Max snaga vetra: " << MSV << " ,Stepen plavetnila: " << S << endl;
}
istream& operator>>(istream& in, More& m) {
	in>> m.P >> m.S >> m.MSV >> m.naziv;
	return in;
}

