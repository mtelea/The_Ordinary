#include "Produs.h"
#include "exceptii.h"

int Produs::cod_max=1;

Produs::Produs(const std::string &brand, const std::string &tipTen, float cantitate, float pret,int stoc) : brand(
        brand),cod_produs(cod_max), tip_ten(tipTen), cantitate(cantitate), pret(pret), stoc(stoc) {
        if (this->pret <= 0) throw EroarePret(pret);
        if (this->cantitate <= 0) throw EroareCantitate(cantitate);
        cod_max++;
}

Produs &Produs::operator=(const Produs &p) {
        this->brand = p.brand;
        this->cod_produs=p.cod_produs;
        this->tip_ten = p.tip_ten;
        this->cantitate=p.cantitate;
        this->pret=p.pret;
        return *this;
    }

int Produs::getStoc() const {
    return this->stoc;
}

double Produs::getPret() {
    return this->pret;
}

std::string Produs::getBrand() const {
    return this->brand;
}

float Produs::getCantitate() const {
    return this->cantitate;
}

Produs::~Produs(){}

Produs::Produs() {}





