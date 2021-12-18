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
    friend class Produs_Builder;
public:
    SPF(const std::string &brand, const std::string &tipTen, float cantitate,
        float pret, int stoc, int factorProtectie);
    SPF(const SPF &s);
    ~SPF();
    SPF() = default;
    friend std::ostream& operator<<(std::ostream& iesire,const SPF &s);
    SPF& operator=(const SPF &s);
    double Reducere () override;
    int getCod() const ;
    void set_new_pret() override;
    std::shared_ptr <Produs> clone() const override;

};

#endif //MAIN_CPP_SPF_H
