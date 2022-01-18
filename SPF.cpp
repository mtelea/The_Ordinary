#include "SPF.h"
#include "Produs.h"

SPF::SPF(const std::string &brand, const std::string &tipTen, float cantitate, float pret, int stoc,
         int factorProtectie) : Produs(brand, tipTen, cantitate, pret, stoc),
                                factor_protectie(factorProtectie) {

}


SPF::SPF(const SPF &s) : Produs(s){
    this->brand = s.brand;
    this->cod_produs=s.cod_produs;
    this->tip_ten = s.tip_ten;
    this->factor_protectie=s.factor_protectie;
    this->cantitate=s.cantitate;
//    try {if (s.pret<50) this->pret = s.pret;
//         else throw 20;}
//    catch (int e) {std::cout<<"Nu i bun pretu'";}
    this->pret=s.pret;
}

SPF:: ~SPF()
{}

 std::ostream& operator<<(std::ostream& iesire,const SPF &s){
    iesire<<"SPF-ul "<<s.brand<<" "<<"are pretul de "<<s.pret<<" lei si are factor protectie "<<s.factor_protectie;
    iesire<<std::endl;
    return iesire;
}

SPF& SPF::operator=(const SPF &s){
    this->brand = s.brand;
    this->cod_produs=s.cod_produs;
    this->tip_ten = s.tip_ten;
    this->factor_protectie=s.factor_protectie;
    this->cantitate=s.cantitate;
    this->pret=s.pret;
    return *this;
}

 double SPF::majorare() {
    if (this->factor_protectie>=30)  return (pret + (pret*0.10));
    else if(factor_protectie >=50) return (pret + (pret*0.25));
}


int SPF::getCod() const {
    return this->cod_produs;
}


void SPF::set_new_pret(){
    this->pret = this->majorare();
}


std::shared_ptr <Produs> SPF::clone() const {
    return std::make_shared <SPF>(*this);
}








