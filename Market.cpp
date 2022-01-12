#include "Market.h"
#include "CleasingGel.h"
#include "SPF.h"

Market::Market(const std::vector <std::shared_ptr <Produs>> &produse, const std::string &nume, const std::string &adresa) : produse(produse), nume(nume), adresa(adresa){}

Market::Market(const Market& copie): nume(nume),adresa(adresa){
    for(const auto& produs : produse)
        produse.push_back(produs->clone());
}

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
    std::cout<<"Pretul total este :"<<pret<<" lei"<<std::endl;
}

void Market::verifica_stoc(std::string nume) {
    for (const auto &prod : produse)
        if (nume == prod->getBrand())
            if (prod->getStoc()==0) throw EroareStoc();
}

std::ostream& operator<<(std::ostream& iesire,const Market& m){
    iesire<<"Magazinul "<<m.nume<<" se afla la adresa "<<m.adresa<<std::endl;
    return iesire;
}

Market &Market::operator=(Market copie) {
    swap(*this,copie);
    return *this;
}

void swap(Market &m1, Market &m2) {
    using std::swap;
    swap(m1.nume,m2.nume);
    swap(m1.adresa,m2.adresa);
    swap(m1.produse,m2.produse);
}
