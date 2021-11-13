#include <iostream>
#include "Market.h"
#include "SPF.h"
#include "CleasingGel.h"
#include "Comanda.h"
#include "Client.h"



int main()
{

    SPF s1("Garnier",111,"mixt",200,50,40,50);//constructor init cu parametri
    SPF s2("Altruist",112,"normal",60,75.5,30,30);
    SPF s3("Istree",113,"uscat",150,47.9,15,30);
    SPF s4("Synergy",114,"potrivit oricarui ten",100,80.3,20,50);
//    SPF s5("")
    //SPF s3(s2); //constructor de copiere
    std::cout<<s2; //operatorul <<

//    CleansingGel g2("Cerave",234, "uscat", 100, 30,2);
//    std::cout<<g2;
//    CleansingGel g3(g2);
//    std::cout<<g3;
//    CleansingGel g4("Bioderma",456,"mixt",250,50,10);
//

    //Market m("The ordinary", "Brasov");
    //std::cout<<m;
    //Market m2{{s2,s3},{g2,g3},
//             "Geek and Gorgeous","Bucuresti"};
//    Comanda com{105522,{s2},{g2,g4},"10-Oct-2020" };
//    com.total_comanda();
//    Client c1{"Popescu",111,"Sibiu",{com}};
//    std::cout<<c1;
  return 0;
}

