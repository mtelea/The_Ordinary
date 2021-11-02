#include <iostream>
#include "Market.h"
#include "SPF.h"
#include "CleasingGel.h"
#include "Comanda.h"
#include "Client.h"



int main()
{
    SPF s1;
    std::cout<<s1;
    SPF s2("Altruist",001,"mixt",50,200,35.4,60); //constructor init cu parametri
    SPF s3(s2); //constructor de copiere
    std::cout<<s2; //operatorul <<
    s2.pret_nou(50); //pretul dupa marire
    s2.actualizare_stoc(2); // stoc actulizat
    SPF s4;
    s4 = s2;

    CleansingGel g1;
    std::cout<<g1;
    CleansingGel g2("Cerave",234, "uscat", 100, 30);
    std::cout<<g2;
    CleansingGel g3(g2);
    std::cout<<g2;
    CleansingGel g4("Bioderma",456, "mixt", 150, 50);
    g2.pret_redus(25);
    std::cout<<g2;
    g4.pret_majorat(50);
    std::cout<<g4;

    Market m("The ordinary", "Brasov");
    m.add_spf(s2);
    m.add_cleansing(g2);
    std::cout<<m;
    m.sum_total_cg();
    m.sum_total_spf();
    m.stoc_cleansing();
    m.stoc_spf();
    Market m2{{s2,s3},{g2,g3},
             "Geek and Gorgeous","Bucuresti"};
    Comanda com{105522,{s2},{g2,g4},"10-Oct-2020" };
    com.total_comanda();
    Client c1{"Popescu",111,"Sibiu",{com}};
    std::cout<<c1;
    return 0;
}

