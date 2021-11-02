#ifndef MAIN_CPP_CLEASINGGEL_H
#define MAIN_CPP_CLEASINGGEL_H

#include<iostream>
#include<vector>


class CleansingGel {
    std::string brand;
    int cod_produs;
    std::string tip_ten;
    float cantitate, pret;
public:
    CleansingGel();
    CleansingGel(const std::string& br,int cod,const std::string& tt, float ct, float p);
    CleansingGel(const CleansingGel &g);
    friend std::ostream& operator<<(std::ostream& iesire,const CleansingGel& g);
    void pret_redus(float procent_reducere);
    void pret_majorat(float procent_marire);
    float getPret() const;
    std::string getBrand() const;
    float getCantitate() const;

};


#endif //MAIN_CPP_CLEASINGGEL_H
