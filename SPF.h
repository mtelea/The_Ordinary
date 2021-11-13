#ifndef MAIN_CPP_SPF_H
#define MAIN_CPP_SPF_H

#include<string>
#include<vector>
#include<iostream>
#include<memory>
#include "Produs.h"

class SPF : public Produs {
protected:
    int factor_protectie;
public:
    SPF(const std::string &brand, int codProdus, const std::string &tipTen, float cantitate,
        float pret, int stoc, int factorProtectie);

    SPF(const SPF &s);

    ~SPF();
    friend std::ostream& operator<<(std::ostream& iesire,const SPF &s);
    SPF& operator=(const SPF &s);
    double Reducere () override;
    double getPret() const override;
    std::string getBrand() const override;
    void set_new_pret() override;
    std::shared_ptr <Produs> clone() const override;

};

#endif //MAIN_CPP_SPF_H
