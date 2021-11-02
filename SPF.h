#ifndef MAIN_CPP_SPF_H
#define MAIN_CPP_SPF_H

#include<string>
#include<vector>
#include<iostream>

class SPF {
    string brand;
    int cod_produs;
    string tip_ten;
    int factor_protectie;
    float cantitate, pret;
    int stoc;
public:
    SPF();
    SPF(const string& br,int cod,const string& tt, int fp,float ct,float p,int s);
    SPF(const SPF &s);
    ~SPF();
    friend ostream& operator<<(ostream& iesire,const SPF &s);
    SPF& operator=(const SPF &s);
    void pret_nou(float procent_marire);
    void actualizare_stoc(int nr_prod_comandate);
    float getPret() const;
    string getBrand() const;
    float getCantitate() const;
};


#endif //MAIN_CPP_SPF_H
