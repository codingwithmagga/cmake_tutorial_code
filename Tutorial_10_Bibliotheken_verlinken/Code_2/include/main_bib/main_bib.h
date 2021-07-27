#ifndef STADT_H
#define STADT_H

#include "public_bib.h"
#include <vector>

class Stadt{
public:
    void add_haus(Haus haus);
    void ausgabe_ew();

private:
    std::vector<Haus> haus_vec_;
};

#endif // STADT_H
