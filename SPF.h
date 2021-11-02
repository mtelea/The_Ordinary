#ifndef MAIN_CPP_SPF_H
#define MAIN_CPP_SPF_H

#include<string>
#include<vector>
#include<iostream>

class SPF {
    std::string brand;
    int cod_produs;
    std::string tip_ten;
    int factor_protectie;
    float cantitate, pret;
    int stoc;
public:
    SPF();
    SPF(const std::string& br,int cod,const std::string& tt, int fp,float ct,float p,int s);
    SPF(const SPF &s);
    ~SPF();
    friend std::ostream& operator<<(std::ostream& iesire,const SPF &s);
    SPF& operator=(const SPF &s);
    void pret_nou(float procent_marire);
    void actualizare_stoc(int nr_prod_comandate);
    float getPret() const;
    std::string getBrand() const;
    float getCantitate() const;
};


#endif //MAIN_CPP_SPF_H
