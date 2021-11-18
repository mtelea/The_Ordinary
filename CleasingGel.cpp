#include "CleasingGel.h"
#include "Produs.h"

CleansingGel::CleansingGel(const std::string &brand, const std::string &tipTen,
                           float cantitate,float pret, int stoc, int concentratieHa) : Produs(brand, tipTen,
                                                                                   cantitate,pret, stoc),
                                                                            concentratie_HA(concentratieHa) {}

CleansingGel::CleansingGel(const CleansingGel &g) : Produs (g){
    this->brand = g.brand;
    this->cod_produs = g.cod_produs;
    this->tip_ten = g.tip_ten;
    this->cantitate = g.cantitate;
    this->pret = g.pret;
    this->concentratie_HA=g.concentratie_HA;
}

std::ostream& operator<<(std::ostream& iesire,const CleansingGel& g){
    iesire<<"Gelul de curatare "<<g.brand<<" pentru tipul de ten "<<g.tip_ten<<" are pretul "<<g.pret<<std::endl;
    return iesire;
}

float CleansingGel::getCantitate() const{
    return this->cantitate;}

double CleansingGel::getPret() const{
    return this->pret;
}

double CleansingGel::Reducere (){
    if (this->stoc<20)  return (this->pret - (this->pret*0.10));
    if(this->stoc<10) return (this->pret - (this->pret* 0.25));
    return this->pret;
}

void CleansingGel::set_new_pret(){
    this->pret = this->Reducere();
}

std::string CleansingGel::getBrand() const {
    return this->brand;
}

std::shared_ptr <Produs> CleansingGel::clone() const {
    return std::make_shared <CleansingGel>(*this);
}






