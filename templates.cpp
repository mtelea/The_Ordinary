//
// Created by Maria on 1/18/2022.
//

#include "templates.h"

template<class T>
clientTemplate<T>::clientTemplate(const std::string& nume,const std::string& adresa, T idclient,const std::vector<std::shared_ptr<Comanda>> &istoric_comenzi) :
    nume(nume),adresa(adresa),idclient(idclient),istoric_comenzi(istoric_comenzi) {}

template<class T>
clientTemplate<T>::~clientTemplate() {
}

template<class T>
void clientTemplate<T>::search(const T& id) {
    if (this->idclient == id)
    {
        std::cout<<"Clientul: "<<nume<<" cu ID-ul: "<<idclient<<" are urmatorul istoric de comenzi: ";
        for(int i=0;i<istoric_comenzi.size();i++)
        {
            std::cout<<istoric_comenzi.at(i)<<" ";
        }
    }
}

template<class T>
clientTemplate<T>::clientTemplate(clientTemplate<T> &c) {
    nume = c.nume;
    adresa = c.adresa;
    idclient = c.idclient;
    istoric_comenzi = c.istoric_comenzi;
}


template
        class clientTemplate<int>;

template
        class clientTemplate<float>;

