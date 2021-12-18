//
// Created by Maria on 12/18/2021.
//

#ifndef THE_ORDINARY_PRODUS_FACTORY_H
#define THE_ORDINARY_PRODUS_FACTORY_H
#include "CleasingGel.h"
#include "SPF.h"

class Produs_Factory {
public:
    static CleansingGel gel_spuma();
    static CleansingGel gel_hidratant();
    static CleansingGel gel_activ();
    static SPF crema_copii();
    static SPF crema_tratament();
};


#endif //THE_ORDINARY_PRODUS_FACTORY_H
