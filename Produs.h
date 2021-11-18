#ifndef THE_ORDINARY_PRODUS_H
#define THE_ORDINARY_PRODUS_H

#include<iostream>
#include<vector>
#include<memory>

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
    virtual double getPret() const = 0;
    virtual ~Produs();
    virtual double Reducere() = 0;
    virtual void set_new_pret() = 0;
    virtual std::string getBrand() const = 0;
    virtual std::shared_ptr <Produs> clone() const = 0;

};


#endif //THE_ORDINARY_PRODUS_H
