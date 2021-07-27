#include "public_bib.h"

int Haus::rechteck_flaeche(int a, int b) { return a * b; }

int Haus::rechteck_umfang(int a, int b) { return 2 * (a + b); }

void Haus::add_zimmer(int laenge, int breite)
{
    Zimmer zimmer;
    zimmer.flaeche = rechteck_flaeche(laenge, breite);
    zimmer.umfang = rechteck_umfang(laenge, breite);
    zimmer_vec_.push_back(zimmer);
}

std::vector<Haus::Zimmer> Haus::get_zimmer_vec() { return zimmer_vec_; }
