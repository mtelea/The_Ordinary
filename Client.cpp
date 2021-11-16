#include "Client.h"
#include "Comanda.h"

Client::Client(const std::string &nume, int idClient, const std::string &adresa,const std::vector <std::shared_ptr <Comanda>> &istoricComenzi) :
        nume(nume),id_client(idClient),adresa(adresa),istoric_comenzi(istoricComenzi) {}



std::ostream& operator<<(std::ostream& out,Client &c){
    out<<"Clientul "<<c.nume<<" cu id-ul "<<c.id_client<<" cu adresa "<<c.adresa<<" are urmatorul istoric de comenzi:"<<std::endl;
    for(unsigned i=0;i<c.istoric_comenzi.size();i++) {
        std::vector <std::shared_ptr <Produs>> aux = c.istoric_comenzi.at(i)->getVProduse();
        for(unsigned j=0;j<aux.size();j++){
            out<<"Produs "<<j<<" : "<<aux.at(j)->getBrand()<<" "<<aux.at(j)->getPret()<<" lei";
            out<<std::endl;
        }
        out<<std::endl;
    }

    return out;
}
