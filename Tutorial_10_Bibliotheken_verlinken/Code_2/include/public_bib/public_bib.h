#ifndef HAUS_H
#define HAUS_H

#include <vector>

class Haus {
public:
    struct Zimmer {
        int flaeche;
        int umfang;
    };

    void add_zimmer(int laenge, int breite);
    std::vector<Zimmer> get_zimmer_vec();

private:
    int rechteck_flaeche(int a, int b);
    int rechteck_umfang(int a, int b);

    std::vector<Zimmer> zimmer_vec_;
};

#endif // HAUS_H
