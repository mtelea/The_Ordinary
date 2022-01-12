#ifndef MAIN_CPP_MARKET_H
#define MAIN_CPP_MARKET_H

#include <vector>
#include <cstring>
#include "Produs.h"
#include "exceptii.h"

class Market {
    std::vector <std::shared_ptr <Produs>> produse;
    std::string nume, adresa;
public:
    Market(const std::vector <std::shared_ptr <Produs>> &produse, const std::string &nume, const std::string &adresa);
    Market(const Market& copie);
    Market& operator=(Market copie);
    friend void swap(Market& m1, Market& m2);
    void add_produs(const std::shared_ptr <Produs> &prod);
    std::string getNume() const;
    void setNume(const std::string &nume);
    std::string getAdresa() const;
    void setAdresa(const std::string &adresa);
    Market(const std::string &nume, const std::string &adresa);
    void pret_total();
    void verifica_stoc(std::string nume);
    friend std::ostream& operator<<(std::ostream& iesire,const Market& m);
};

#endif //MAIN_CPP_MARKET_H
