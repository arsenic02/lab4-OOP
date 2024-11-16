#include "Put.h"

Put::Put() {
	br_segm = tren = 0;
	segmenti = 0;
}

Put::Put(int n) {
	tren = 0;
	br_segm = n;
	segmenti = new Segment * [br_segm];
}

Put::~Put() {
	if (segmenti != 0) {
		for (int i = 0; i < br_segm; i++)
			if (segmenti[i] != 0)
				delete segmenti[i];
		delete[] segmenti;
	}
	segmenti = 0;
}

void Put::dodaj(Segment* s) {
	if (tren + 1 <= br_segm)
		segmenti[tren++] = s;
}

ostream& operator<<(ostream& out, Put& s) {
	for (int i = 0; i < s.tren; i++) {
		s.segmenti[i]->prikaz(out);
	}
	return out;
}
void Put::sortirajLep()
{
	for (int i = 1; i < tren; i++) {
		Segment* pom = segmenti[i];
		int j = i - 1;
		while (j >= 0 && pom->racKoefLepote() > segmenti[j]->racKoefLepote()) {
			segmenti[j + 1] = segmenti[j];
			segmenti[j] = pom;
			j -= 1;
		}
	}
}
void Put::sortirajTez()
{
	int i, j;
	for (i = 0; i < tren; i++)
	{
		int min = i;
		for (int j = i + 1; j < tren; j++) {
			if (segmenti[min]->racKoefTezine() > segmenti[j]->racKoefTezine())
				min = j;
		}
		Segment* pom = segmenti[min];
		segmenti[min] = segmenti[i];
		segmenti[i] = pom;
	}
}
