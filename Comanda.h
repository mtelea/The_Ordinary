#ifndef MAIN_CPP_COMANDA_H
#define MAIN_CPP_COMANDA_H

#include<vector>
#include<iostream>
#include "SPF.h"
#include "CleasingGel.h"

class Comanda {
    int id_comanda;
    std::vector<SPF>spf_comandat;
    std::vector<CleansingGel>cg_comandat;
    float pret;
    std::string data_comanda;

public:
    Comanda(int idComanda, const std::vector <SPF> &spfComandat, const std::vector <CleansingGel> &cgComandat,
            const std::string &dataComanda);
    void total_comanda();
    int getID_comanda()const;
    float getPret()const;
    std::string getData()const;
    std::vector<SPF> getSPF_comandat()const;
    std::vector<CleansingGel> getCG_comandat()const;
};


#endif //MAIN_CPP_COMANDA_H
