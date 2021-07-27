#include "private_bib.h"

double Schaetzer::schaetze_einwohner(int quadrameter)
{
    return quadrameter / static_cast<double>(quadrameter_pro_person_);
}
