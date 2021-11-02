#include "CleasingGel.h"

CleansingGel::CleansingGel(){
    brand = "No name";
    cod_produs=0;
    tip_ten="Oarecare";
    cantitate=pret=0;
}

CleansingGel::CleansingGel(const std::string& br,int cod,const std::string& tt, float ct, float p){
    brand = br;
    cod_produs = cod;
    tip_ten=tt;
    cantitate=ct;
    pret=p;
}

CleansingGel::CleansingGel(const CleansingGel &g){
    this->brand = g.brand;
    this->cod_produs = g.cod_produs;
    this->tip_ten = g.tip_ten;
    this->cantitate = g.cantitate;
    this->pret = g.pret;
}

std::ostream& operator<<(std::ostream& iesire,const CleansingGel& g){
    iesire<<"Gelul de curatare "<<g.brand<<" pentru tipul de ten "<<g.tip_ten<<" are pretul "<<g.pret<<std::endl;
    return iesire;
}

void CleansingGel::pret_redus(float procent_reducere){
    this->pret = this->pret - (procent_reducere/100)*this->pret;
    std::cout<<"Pretul dupa reducere este "<<this->pret<<std::endl;
}

void CleansingGel:: pret_majorat(float procent_marire){
    this->pret = this->pret + (procent_marire/100)* this->pret;
    std::cout<<"Noul pret este: "<<this->pret<<std::endl;
}

float CleansingGel::getPret() const{
    return this->pret;
}

std::string CleansingGel::getBrand() const{
    return this->brand;
}

float CleansingGel::getCantitate() const{
    return this->cantitate;
}
