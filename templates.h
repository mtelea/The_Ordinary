//
// Created by Maria on 1/18/2022.
//

#ifndef MAIN_CPP_TEMPLATE_H
#define MAIN_CPP_TEMPLATE_H

#include<vector>
#include<memory>
#include<string>
#include<iostream>
#include "Comanda.h"

template<class T>
class clientTemplate{
    std::string nume, adresa;
    T idclient;
    std::vector<std::shared_ptr<Comanda>> istoric_comenzi;
public:

    clientTemplate(const std::string& nume,const std::string& adresa, T idclient,const std::vector<std::shared_ptr<Comanda>> &istoric_comenzi);

    ~clientTemplate();

    clientTemplate(clientTemplate<T>& c);

    void search(const T &id);


};




#endif //MAIN_CPP_TEMPLATE_H
