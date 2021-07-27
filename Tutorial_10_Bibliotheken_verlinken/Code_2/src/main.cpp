#include "main_bib.h"

int main()
{
    Haus haus1, haus2;
    haus1.add_zimmer(5, 4);
    haus1.add_zimmer(4, 7);
    haus1.add_zimmer(4, 4);
    haus2.add_zimmer(3, 6);
    haus2.add_zimmer(5, 3);

    Stadt stadt;
    stadt.add_haus(haus1);
    stadt.add_haus(haus2);

    stadt.ausgabe_ew();

    return 0;
}
