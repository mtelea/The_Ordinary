#ifndef THE_ORDINARY_PRODUS_H
#define THE_ORDINARY_PRODUS_H

#include<iostream>
#include<vector>
#include<memory>
#include "exceptii.h"

class Produs {
protected:
    std::string brand;
    int cod_produs;
    std::string tip_ten;
    float cantitate;
    double pret;
    int stoc;
    static int cod_max;
public:
    Produs(const std::string &brand, const std::string &tipTen, float cantitate, float pret,int stoc);
    Produs();
    Produs &operator=(const Produs &p);
    virtual ~Produs();
    virtual double majorare() = 0;
    virtual void set_new_pret() = 0;
     int getStoc() const;
    double getPret() const;
    std::string getBrand() const;
    float getCantitate() const;
    virtual std::shared_ptr <Produs> clone() const = 0;

};


#endif //THE_ORDINARY_PRODUS_H
