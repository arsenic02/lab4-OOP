#include "Gora.h"
Gora::Gora(float p, float d, float v, float b, char* nazivS):Segment(nazivS)
{
	P = p;
	D = d;
	V = v;
	B = b;
}
int Gora::racKoefTezine()
{
	T = B * D / (D + P + V + D / P);
	return T;
}

int Gora::racKoefLepote()
{
	L = (1 - B) * V;
	return L;
}

int Gora::ukupanKoef()
{
	K = T + L;
	return K;
}
void Gora::prikaz(ostream& izlaz)
{
	izlaz << "Gora, " <<"Ukupan koef: "<< ukupanKoef() <<" Koef tezine : " << T << ", Koef lepote : " << L << ", Povrsina : " << P <<
		" ,Duzina puta: " << D << " ,Razlika nadm visine: " << V << " ,Stepen inverzne posumljenosti: "<<B << endl;
}
istream& operator>>(istream& in, Gora& g) {
	in >> g.P >> g.D >> g.V >> g.B >> g.naziv;
	return in;
}
