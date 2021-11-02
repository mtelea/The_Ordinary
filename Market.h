#ifndef MAIN_CPP_MARKET_H
#define MAIN_CPP_MARKET_H

#include<vector>
#include "SPF.h"
#include "CleasingGel.h"

class Market {
    std::vector<SPF> spf_list;
    std::vector<CleansingGel> cg_list;
    std::string nume, adresa;
public:
    Market(const std::vector<SPF> &spfList, const std::vector<CleansingGel> &cgList, const std::string &nume, const std::string &adresa);
    void add_spf(SPF &spf);
    void add_cleansing(CleansingGel &cg);
    std::string getNume() const;
    void setNume(const std::string &nume);
    std::string getAdresa() const;
    void setAdresa(const std::string &adresa);
    Market(const std::string &nume, const std::string &adresa);
    void stoc_spf();
    void stoc_cleansing();
    void sum_total_spf();
    void sum_total_cg();
    friend std::ostream& operator<<(std::ostream& iesire,const Market& m);
};

#endif //MAIN_CPP_MARKET_H
