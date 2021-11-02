#include "Comanda.h"
#include "SPF.h"
#include "CleasingGel.h"

Comanda::Comanda(int idComanda, const std::vector<SPF> &spfComandat, const std::vector<CleansingGel> &cgComandat,
                 const std::string &dataComanda) : id_comanda(idComanda), spf_comandat(spfComandat),
                                              cg_comandat(cgComandat),data_comanda(dataComanda) {}

void Comanda::total_comanda(){
    float total=0;
    for(unsigned i=0; i<this->spf_comandat.size();i++)
        total += this->spf_comandat.at(i).getPret();
    for(unsigned i=0; i<this->cg_comandat.size();i++)
        total += this->cg_comandat.at(i).getPret();
    std::cout<<"total: "<<total<<std::endl;
}

int Comanda::getID_comanda()const{
    return this->id_comanda;
}

float Comanda::getPret()const{
    return this->pret;
}

std::string Comanda::getData()const{
    return this->data_comanda;
}

std::vector<SPF> Comanda:: getSPF_comandat()const{
    return this->spf_comandat;
}

std::vector<CleansingGel> Comanda:: getCG_comandat()const{
    return this->cg_comandat;
}