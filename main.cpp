#include <iostream>
#include<cstring>

using namespace std;

class SPF{
    string brand;
    int cod_produs;
    string tip_ten;
    int factor_protectie;
    float cantitate, pret;
    int stoc;

public:
    //Constructor fara parametri
    SPF(){
        brand = "No name";
        cod_produs=0;
        tip_ten="Oarecare";
        factor_protectie=stoc=0;
        cantitate=pret=0;
    }

    // Consturctor cu parametri
    SPF(const string& br,const int cod,const string& tt,const int fp,const float ct,const float p,const int s){
        brand = br;
        cod_produs=cod;
        tip_ten = tt;
        factor_protectie=fp;
        cantitate=ct;
        pret=p;
        stoc=s;
    }

    //Constructor de copiere
    SPF(SPF& s){
        this->brand = s.brand;
        this->cod_produs=s.cod_produs;
        this->tip_ten = s.tip_ten;
        this->factor_protectie=s.factor_protectie;
        this->cantitate=s.cantitate;
        this->pret=s.pret;
        this->stoc=s.stoc;
    }

    ~SPF()
    {
        cout<<"S-a apelat destructorul\n";
    }

    friend ostream& operator<<(ostream& iesire,const SPF &s){
        iesire<<"SPF-ul "<<s.brand<<" "<<"are pretul de "<<s.pret<<" lei si are factor protectie "<<s.factor_protectie;
        iesire<<endl;
        return iesire;
    }

    SPF& operator=(const SPF &s){
        this->brand = s.brand;
        this->cod_produs=s.cod_produs;
        this->tip_ten = s.tip_ten;
        this->factor_protectie=s.factor_protectie;
        this->cantitate=s.cantitate;
        this->pret=s.pret;
        this->stoc=s.stoc;
        return *this;
    }

    void pret_nou(float procent_marire){
        this->pret = this->pret + (procent_marire/100)* this->pret;
        cout<<"Noul pret este: "<<this->pret<<endl;
    }

    void actualizare_stoc(int nr_prod_comandate){
        this->stoc = this->stoc - nr_prod_comandate;
        cout<<"Numarul de produse ramase in stoc este de: "<<this->stoc<<" SPF-uri"<<endl;
    }


};

int main()
{
    SPF s1;//constructor init fara parametri
    SPF s2("Altruist",001,"mixt",50,200,35.4,60); //constructor init cu parametri
    SPF s3(s2); //constructor de copiere
    cout<<s2; //operatorul <<
    s2.pret_nou(50); //pretul dupa marire
    s2.actualizare_stoc(2); // stoc actulizat




    return 0;
}

