#include "Mocvara.h"
Mocvara::Mocvara(float p, float z, float s, char* nazivS) : Segment(nazivS)
{
	P = p;
	Z = z;
	S = s;
	
}
int Mocvara::racKoefTezine()
{
	T = (1 - Z) * (1 - 1 / (S * P));//stepen plavetnila 
	return T;
}

int Mocvara::racKoefLepote()
{
	L = 1 - T;
	return L;
}
int Mocvara::ukupanKoef()
{
	K = T - L;
	return K;
}
void Mocvara::prikaz(ostream& izlaz)
{
	izlaz <<"Mocvara, " << "Ukupan koef: " << ukupanKoef() << " Koef tezine: "<< T << " ,Koef lepote: " << L << " ,Povrsina: " << P <<
		" ,Stepen zitkosti: " << Z << " ,Stepen plavetnila: " << S << endl;
}
istream& operator>>(istream& in, Mocvara& m) {
	in >>m.T>>m.L >> m.P >> m.Z >> m.S >> m.naziv;//in >> m.P >> m.Z >> m.S >> m.naziv;
	return in;
}