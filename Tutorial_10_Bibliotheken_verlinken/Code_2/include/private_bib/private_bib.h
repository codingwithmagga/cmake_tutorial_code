#ifndef SCHAETZER_H
#define SCHAETZER_H

class Schaetzer {
public:
    double schaetze_einwohner(int quadrameter);

private:
    int quadrameter_pro_person_ = 30;
};

#endif // SCHAETZER_H
