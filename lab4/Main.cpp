#include "Gora.h"
#include "Mocvara.h"
#include "More.h"
#include "Segment.h"
#include "Put.h"
#include "Bara.h"
#include <fstream>
#include <iostream>
#define RAND_MAX 100
using namespace std;

void main()
{
	ifstream ulaz("ulaz.txt");
	
	Put* put = new Put(3108);//2331+777=3108

	for (int i = 0; i < 777; i++) {
		float p = 1+rand() % 100;
		float s = 1+rand() % 100;
		float msv = rand() % 12;
		
		More* m = new More(p, s, msv, (char*)"More");
		
		ulaz >> *m;
		put->dodaj(m);
	}
	for (int i = 0; i < 777; i++) {
		float p = 1+rand() % 1000;
		float s = 1+rand() % 1000;
		float z = 0.01 * (rand() % 100);
		Mocvara* m = new Mocvara(p, z, s, (char*)"Mocvara");
		ulaz >> *m;
		put->dodaj(m);
	}
	for (int i = 0; i < 777; i++) {
		float p = 1+rand() % 1000;
		float d = 1+rand() % 1000;
		float v = 1+rand() % 1000;
		float b = 0.01 *( rand() % 100);//0,01 do 1 
		Gora *g = new Gora(p, d, v, b, (char*)"Gora");
		ulaz >> *g;
		put->dodaj(g);
	}
	for (int i = 0; i < 777; i++) {
		float p = 1 + rand() % 100;
		float s = 1 + rand() % 100;
		float zamucenost = rand() % 12;

		Bara* m = new Bara(p, s, zamucenost, (char*)"Bara");

		ulaz >> *m;
		put->dodaj(m);
	}
	ulaz.close();
	cout << "Fajl je pripremljen! "<<endl;
	ofstream izlaz("izlaz.txt");
	/*
	izlaz << *put;
	izlaz << "------------------------------------------------------------------------" << endl;
	*/
	put->sortirajTez();
	put->sortirajLep();
	cout << "Izvrsena su oba sortiranja! ";
	izlaz << *put;
	izlaz.close();
	delete put;
	return;
}