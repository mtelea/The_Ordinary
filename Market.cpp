#include "Market.h"
#include "CleasingGel.h"
#include "SPF.h"

Market::Market(const std::vector<SPF> &spfList, const std::vector<CleansingGel> &cgList, const std::string &nume, const std::string &adresa)
        : spf_list(spfList), cg_list(cgList), nume(nume), adresa(adresa) {}

void Market::add_spf(SPF &spf){
    spf_list.push_back(spf);
}

void Market::add_cleansing(CleansingGel &cg){
    cg_list.push_back(cg);
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

void Market::stoc_spf(){
    std::cout<<"Pe stoc se afla "<<this->spf_list.size()<<" lotiuni cu spf"<<std::endl;
}

void Market::stoc_cleansing(){
    std::cout<<"Pe stoc se afla "<<this->cg_list.size()<<" geluri de curatare"<<std::endl;
}

void Market::sum_total_spf(){
    float suma=0;
    for(unsigned i=0; i<this->spf_list.size();i++)
        suma+= this->spf_list.at(i).getPret();
    std::cout<<"Pretul total pt stocul de spf este "<<suma<<std::endl;
}

void Market::sum_total_cg(){
    float suma=0;
    for(unsigned i=0; i<this->cg_list.size();i++)
        suma+= this->cg_list.at(i).getPret();
    std::cout<<"Pretul total pt stocul de spf este "<<suma<<std::endl;
}

std::ostream& operator<<(std::ostream& iesire,const Market& m){
    iesire<<"Magazinul "<<m.nume<<" se afla la adresa "<<m.adresa<<std::endl;
    return iesire;
}