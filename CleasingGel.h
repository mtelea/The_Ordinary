#ifndef MAIN_CPP_CLEASINGGEL_H
#define MAIN_CPP_CLEASINGGEL_H

#include<iostream>
#include<vector>
#include<memory>
#include "Produs.h"


class CleansingGel: public Produs {
protected:
    int concentratie_HA;
public:
    CleansingGel(const std::string &brand, int codProdus, const std::string &tipTen,
                 float cantitate,float pret, int stoc, int concentratieHa);

    CleansingGel(const CleansingGel &g);
    friend std::ostream& operator<<(std::ostream& iesire,const CleansingGel& g);
    float getCantitate() const;
    double getPret() const;
   double Reducere() override;
   void set_new_pret() override;
   std::string getBrand() const;
   std::shared_ptr <Produs> clone() const override;

};


#endif //MAIN_CPP_CLEASINGGEL_H
