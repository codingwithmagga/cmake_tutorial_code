#include "main_bib.h"

#include "private_bib.h"

#include <cmath>
#include <iostream>

void Stadt::add_haus(Haus haus) {
    haus_vec_.push_back(haus);
}

void Stadt::ausgabe_ew()
{
    std::vector<int> wohnflaeche_vec;

    for (auto& haus : haus_vec_) {

        std::vector<Haus::Zimmer> zimmer_vec = haus.get_zimmer_vec();
        for (auto& zimmer : zimmer_vec) {
            wohnflaeche_vec.push_back(zimmer.flaeche);
        }
    }

    int wohnflaeche_gesamt = 0;
    for (auto& wohnflaeche_zimmer : wohnflaeche_vec) {
        wohnflaeche_gesamt += wohnflaeche_zimmer;
    }

    Schaetzer schaetzer;
    int ew_geschaetzt = std::round(schaetzer.schaetze_einwohner(wohnflaeche_gesamt));

    std::cout << "Die geschätzte Einwohnerzahl in der Stadt beträgt "
              << ew_geschaetzt
              << " Einwohner (gerundet).\n";
}





