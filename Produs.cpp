#include "Produs.h"


Produs::Produs(const std::string &brand, int cod_produs, const std::string &tipTen, float cantitate, float pret,int stoc) : brand(
        brand),cod_produs(cod_produs), tip_ten(tipTen), cantitate(cantitate), pret(pret), stoc(stoc) {}

double Produs::getPret() const{
    return this->pret;
}

Produs::~Produs(){}





