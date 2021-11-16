#ifndef MAIN_CPP_COMANDA_H
#define MAIN_CPP_COMANDA_H

#include<vector>
#include<iostream>
#include "Produs.h"

class Comanda {
    int id_comanda;
    std::vector<std::shared_ptr<Produs>> prod_comandate;
    double pret;
    std::string data_comanda;

public:
    Comanda(int idComanda,std::vector<std::shared_ptr<Produs>> &prod_comandate,double pret,const std::string &dataComanda);
    //const std::vector<Produs> &lista_comandate;
    void total_comanda();
    int getID_comanda()const;
    double getPret()const;
    std::string getBrand(std::shared_ptr<Produs> prod) const;
    std::string getData()const;
    void addProdus(std::shared_ptr<Produs>);
    std::vector<std::shared_ptr<Produs>> getProdComandate() const;
    std::vector<std::shared_ptr<Produs>> getVProduse() const;
    std::shared_ptr <Comanda> clone() const;

};


#endif //MAIN_CPP_COMANDA_H
