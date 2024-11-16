#include "Bara.h"
#include <string.h>
Bara::Bara(float p, float s, int zam, char* nazivS) : Segment(nazivS)
{
	P = p;
	S = s;
	zamucenost = zam;
}
int Bara::racKoefLepote()
{
	L = zamucenost * S / P;
	return L;
}
int Bara::racKoefTezine()
{
	T = zamucenost * P / (L - 1);
	return T;
}
int Bara::ukupanKoef()
{
	K = T * L;
	return K;
}
void Bara::prikaz(ostream& izlaz)
{
	izlaz << "Bara, " << "Ukupan koef: " << ukupanKoef() << " Koef tezine: " << T << " ,Koef lepote: " << L << " ,Povrsina: " << P <<
		" ,Zamucenost: " << zamucenost << " ,Stepen plavetnila: " << S << endl;
}
istream& operator>>(istream& in, Bara& m) {
	in >> m.P >> m.S >> m.zamucenost >> m.naziv;
	return in;
}