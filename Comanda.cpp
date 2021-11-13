#include "Comanda.h"

Comanda::Comanda(int idComanda, std::vector<std::shared_ptr<Produs>> &prod_comandate,double pret, const std::string &dataComanda) :
id_comanda(idComanda),prod_comandate(prod_comandate), pret(pret),data_comanda(dataComanda) {}

void Comanda::total_comanda(){
    double total=0;
    for (int i; i<prod_comandate.size();i++)
        total += prod_comandate.at(i)->getPret();
    this->pret = total;
}

int Comanda::getID_comanda()const{
    return this->id_comanda;
}

double Comanda::getPret()const{
    return this->pret;
}

void Comanda::addProdus(std::shared_ptr<Produs> prod) {
    prod_comandate.push_back(prod);
}

std::string Comanda::getData()const{
    return this->data_comanda;
}

std::vector<std::shared_ptr<Produs>> Comanda:: getProdComandate()const {
    return this->prod_comandate;
}

std::string Comanda::getBrand(std::shared_ptr<Produs> prod) const{
    return prod->getBrand();
}

std::vector<std::shared_ptr<Produs>> Comanda::getVProduse()const{
    return this->prod_comandate;
}

