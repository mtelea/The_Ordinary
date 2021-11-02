#ifndef MAIN_CPP_CLIENT_H
#define MAIN_CPP_CLIENT_H

#include<vector>
#include<iostream>
#include "Comanda.h"

class Client {
    std::string nume;
    int id_client;
    std::string adresa;
    std::vector<Comanda> istoric_comenzi;

public:
    Client(const std::string &nume, int idClient, const std::string &adresa, const std::vector<Comanda> &istoricComenzi);
    friend std::ostream& operator<<(std::ostream& out,Client &c);
};


#endif //MAIN_CPP_CLIENT_H
