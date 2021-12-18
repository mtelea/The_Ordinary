//
// Created by Maria on 12/18/2021.
//

#ifndef THE_ORDINARY_PRODUS_BUILDER_H
#define THE_ORDINARY_PRODUS_BUILDER_H
#include "SPF.h"
#include "Produs.h"

class Produs_Builder {
private:
    SPF s;
public:
    Produs_Builder() = default;

    Produs_Builder& brand(std::string b);

    Produs_Builder& tip_ten(std::string t);

    Produs_Builder& cantitate(float c);

    Produs_Builder& pret(float p);

    Produs_Builder& stoc(int s);

    Produs_Builder& factor(int f);

    SPF build();

};


#endif //THE_ORDINARY_PRODUS_BUILDER_H
