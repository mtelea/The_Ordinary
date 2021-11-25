#include "Produs.h"

int Produs::cod_max=1;

Produs::Produs(const std::string &brand, const std::string &tipTen, float cantitate, float pret,int stoc) : brand(
        brand),cod_produs(cod_max), tip_ten(tipTen), cantitate(cantitate), pret(pret), stoc(stoc) {

        cod_max++;
}

double Produs::getPret() const{
    return this->pret;
}

Produs::~Produs(){}





