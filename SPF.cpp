#include "SPF.h"

SPF::SPF() : brand("Anonim"),cod_produs(0),tip_ten("Oarecare"),factor_protectie(0),cantitate(0),pret(0),stoc(0){}

SPF::SPF(const std::string& br,int cod,const std::string& tt, int fp,float ct,float p,int s) :
        brand(br),cod_produs(cod),tip_ten(tt),factor_protectie(fp),cantitate(ct),pret(p),stoc(s){}

SPF::  SPF(const SPF &s){
    this->brand = s.brand;
    this->cod_produs=s.cod_produs;
    this->tip_ten = s.tip_ten;
    this->factor_protectie=s.factor_protectie;
    this->cantitate=s.cantitate;
    this->pret=s.pret;
    this->stoc=s.stoc;
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
    this->stoc=s.stoc;
    return *this;
}

void SPF:: pret_nou(float procent_marire){
    this->pret = this->pret + (procent_marire/100)* this->pret;
    std::cout<<"Noul pret este: "<<this->pret<<std::endl;
}

void SPF:: actualizare_stoc(int nr_prod_comandate){
    this->stoc = this->stoc - nr_prod_comandate;
    std::cout<<"Numarul de produse ramase in stoc este de: "<<this->stoc<<" SPF-uri"<<std::endl;
}

float SPF:: getPret() const{
    return this->pret;
}

std::string SPF::getBrand() const{
    return this->brand;
}

float SPF::getCantitate() const {
    return this->cantitate;
}





