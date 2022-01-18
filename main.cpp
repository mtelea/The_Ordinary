#include <iostream>
#include "Market.h"
#include "SPF.h"
#include "CleasingGel.h"
#include "Comanda.h"
#include "Client.h"
#include "exceptii.h"
#include "Produs_Factory.h"
#include "Produs_Builder.h"
#include<memory>

using namespace std::string_literals;


int main()
{
    try{
        SPF s0("Bioderma","gras",0,0,20,30);
        std::cout<<s0;
    }

    catch(EroareProdus &eroare){
        std::cout<<eroare.what()<<" ";
    }

    catch(std::exception &eroare){
        std::cout<<eroare.what()<<" "<<std::endl;
    }

    SPF s1("Garnier","mixt",200,50,40,50);//constructor init cu parametri
    SPF s2("Altruist","gras",60,75.5,30,30);
    SPF s3("Istree","uscat",150,47.9,15,30);
    SPF s4("Synergy","oricare",100,80.3,20,50);
    SPF s5("Ivatherm","uscat",70,88.99,60,50);
    SPF s6(s4); //constructor de copiere
    std::cout<<s2; //operatorul <<
    std::cout<<s6;
    std::cout<<"Pretul dupa majorare al SPF-ului "<<s3.getBrand()<<" este "<<s3.majorare()<<std::endl;
    std::cout<<s3;

    CleansingGel g1("Bioderma","gras",200,62,19,0);
    CleansingGel g2("Cerave","uscat",150,45,0,2);
    CleansingGel g3("La Roche Possay","mixt",100,70,12,3);
    CleansingGel g4("Avene","oricare",120,80.5,32,1);
    CleansingGel g5("Neutrogena","mixt",130,25,10,0);
    CleansingGel g6(g3);
    std::cout<<g6;
    std::cout<<"Pretul dupa majorare al gelului este: "<<g4.majorare()<<std::endl;

    Market m1("The Ordinary", "Bucuresti, Sector 6");
    std::cout<<m1;
    std::vector <std::shared_ptr <Produs>> produse1;
    produse1.push_back(std::make_shared<SPF>(s1));
    produse1.push_back(std::make_shared<SPF>(s2));
    produse1.push_back(std::make_shared<SPF>(s3));
    produse1.push_back(std::make_shared<SPF>(s4));
    produse1.push_back(std::make_shared<SPF>(s5));
    produse1.push_back(std::make_shared<CleansingGel>(g1));
    produse1.push_back(std::make_shared<CleansingGel>(g2));
    produse1.push_back(std::make_shared<CleansingGel>(g3));
    produse1.push_back(std::make_shared<CleansingGel>(g4));
    produse1.push_back(std::make_shared<CleansingGel>(g5));


    std::vector<std::shared_ptr<Produs>> produse;
    produse.push_back(std::make_shared<SPF>(s2));
    produse.push_back(std::make_shared<CleansingGel>(g2));
    Comanda comanda(1000,produse,0,"18 Ian 2022");
    comanda.total_comanda();
    comanda.totalMajorareComanda();


    try
    { Market m2{produse,"Geek and Gorgeous","Bucuresti, Sector 3"};
    m2.pret_total();
    m2.verifica_stoc("Cerave");
    std::cout<<m2;}

    catch (EroareProdus &eroare){
        std::cout<<eroare.what()<<std::endl;
    }

    Comanda cmd1{516255,produse,0,"16.11.2021"};
    std::vector <std::shared_ptr<Comanda>> IstoricComenzi;
    IstoricComenzi.push_back(std::make_shared<Comanda>(cmd1));
    cmd1.total_comanda();
    Client c1{"Popescu",999,"Sibiu",IstoricComenzi};
    std::cout<<c1;

   SPF s = Produs_Factory::crema_copii();
   std::cout<<s;

   Produs_Builder p;
   SPF s7 = p.brand("idk").pret(40).build();
   std::cout<<s2;


  return 0;
}

