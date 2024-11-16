#pragma once
#include "Segment.h"
#include "Gora.h"
#include "Mocvara.h"
#include "Put.h"
#include "More.h"
#include <iostream>
using namespace std;
class Put
{
private:
	int br_segm;
	int tren;
	Segment** segmenti;
public:
	Put();
	Put(int n);
	~Put();
	void sortirajTez();
	void sortirajLep();
	void dodaj(Segment* s1);
	friend ostream& operator<<(ostream& out, Put& s);

};

