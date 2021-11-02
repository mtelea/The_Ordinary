#include "Client.h"
#include "Comanda.h"

Client::Client(const std::string &nume, int idClient, const std::string &adresa, const std::vector<Comanda> &istoricComenzi) :
        nume(nume),id_client(idClient),adresa(adresa),istoric_comenzi(istoricComenzi) {}

std::ostream& operator<<(std::ostream& out,Client &c){
    out<<"Clientul "<<c.nume<<" cu id-ul "<<c.id_client<<" cu adresa "<<c.adresa<<" are urmatorul istoric de comenzi:"<<std::endl;
    for(unsigned i=0;i<c.istoric_comenzi.size();i++) {
        std::vector<SPF> aux_spf;
        aux_spf = c.istoric_comenzi.at(i).getSPF_comandat();
        std::vector<CleansingGel> aux_cg;
        aux_cg = c.istoric_comenzi.at(i).getCG_comandat();
        {
            for (unsigned j = 0; j < aux_spf.size(); j++) {
                out << "SPF: " << aux_spf.at(j).getBrand() << " " << aux_spf.at(j).getCantitate() << " ml";
            }
        }

        {
            for (unsigned k = 0; k < aux_cg.size(); k++) {
                out << "Cleansing Gel: " << aux_cg.at(k).getBrand() << " " << aux_cg.at(k).getCantitate() << " ml";
            }
        }

        out<<std::endl;
    }
    return out;
}
