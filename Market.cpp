#include "Market.h"
#include "CleasingGel.h"
#include "SPF.h"

Market::Market(const std::vector <std::shared_ptr <Produs>> &produse, const std::string &nume, const std::string &adresa) : produse(produse), nume(nume), adresa(adresa){}

void Market::add_produs(const std::shared_ptr <Produs> &prod) {
    produse.push_back(prod);
}

std::string Market::getNume() const{
    return this->nume;
}

void Market::setNume(const std::string &nume) {
    this->nume = nume;
}

std::string Market::getAdresa() const{
    return this->adresa;
}

void Market::setAdresa(const std::string &adresa) {
    this->adresa = adresa;
}

Market::Market(const std::string &nume, const std::string &adresa) {
    this->nume= nume;
    this->adresa = adresa;
}

void Market::pret_total(){
    float pret=0;
    for(const auto &prod : produse)
        pret += prod->getPret();
    std::cout<<"Pretul total este :"<<pret<<" lei";
}

std::ostream& operator<<(std::ostream& iesire,const Market& m){
    iesire<<"Magazinul "<<m.nume<<" se afla la adresa "<<m.adresa<<std::endl;
    return iesire;
}