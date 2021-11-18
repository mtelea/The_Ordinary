#include <iostream>
#include "Market.h"
#include "SPF.h"
#include "CleasingGel.h"
#include "Comanda.h"
#include "Client.h"
#include<memory>



int main()
{

    SPF s1("Garnier","mixt",200,50,40,50);//constructor init cu parametri
    SPF s2("Altruist","gras",60,75.5,30,30);
    SPF s3("Istree","uscat",150,47.9,15,30);
    SPF s4("Synergy","oricare",100,80.3,20,50);
    SPF s5("Ivatherm","uscat",70,88.99,60,50);
    SPF s6(s4); //constructor de copiere
    std::cout<<s2; //operatorul <<
    std::cout<<s6;
    std::cout<<"Pretul dupa reducere al SPF-ului "<<s3.getBrand()<<" este "<<s3.Reducere()<<std::endl;
    s3.set_new_pret();
    std::cout<<s3;

    CleansingGel g1("Bioderma","gras",200,62,19,0);
    CleansingGel g2("Cerave","uscat",150,45,50,2);
    CleansingGel g3("La Roche Possay","mixt",100,70,12,3);
    CleansingGel g4("Avene","oricare",120,80.5,32,1);
    CleansingGel g5("Neutrogena","mixt",130,25,10,0);
    CleansingGel g6(g3);
    std::cout<<g6;

    Market m1("The Ordinary", "Bucuresti, Sector 6");
    std::cout<<m1;
    std::vector <std::shared_ptr <Produs>> produse;
    produse.push_back(std::make_shared<SPF>(s1));
    produse.push_back(std::make_shared<SPF>(s2));
    produse.push_back(std::make_shared<SPF>(s3));
    produse.push_back(std::make_shared<SPF>(s4));
    produse.push_back(std::make_shared<SPF>(s5));
    produse.push_back(std::make_shared<CleansingGel>(g1));
    produse.push_back(std::make_shared<CleansingGel>(g2));
    produse.push_back(std::make_shared<CleansingGel>(g3));
    produse.push_back(std::make_shared<CleansingGel>(g4));
    produse.push_back(std::make_shared<CleansingGel>(g5));

    Market m2{produse,"Geek and Gorgeous","Bucuresti, Sector 3"};
    m2.pret_total();
    std::cout<<m2;

    Comanda cmd1{516255,produse,0,"16.11.2021"};
    std::vector <std::shared_ptr<Comanda>> IstoricComenzi;
    IstoricComenzi.push_back(std::make_shared<Comanda>(cmd1));
    cmd1.total_comanda();
    Client c1{"Popescu",999,"Sibiu",IstoricComenzi};
    std::cout<<c1;
  return 0;
}

