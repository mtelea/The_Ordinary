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


double CleansingGel::majorare() {
    if (concentratie_HA>5)  return (pret + (this->pret*0.25));
    if(this->stoc>10) return (this->pret + (this->pret* 0.4));
    return this->pret;
}


void CleansingGel::set_new_pret(){
    this->pret = this->majorare();
}


std::shared_ptr <Produs> CleansingGel::clone() const {
    return std::make_shared <CleansingGel>(*this);
}






