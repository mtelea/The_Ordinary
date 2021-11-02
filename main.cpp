#include <iostream>
#include<vector>

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
    SPF() : brand("Anonim"),cod_produs(0),tip_ten("Oarecare"),factor_protectie(0),cantitate(0),pret(0),stoc(0){}

    // Constructor cu parametri
    SPF(const string& br,int cod,const string& tt, int fp,float ct,float p,int s) :
        brand(br),cod_produs(cod),tip_ten(tt),factor_protectie(fp),cantitate(ct),pret(p),stoc(s){
    }

    //Constructor de copiere
    SPF(const SPF &s){
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

     float getPret() const{
        return this->pret;
    }

     string getBrand() const{
        return this->brand;
    }

     float getCantitate() const{
        return this->cantitate;
    }

};

class CleansingGel{
    string brand;
    int cod_produs;
    string tip_ten;
    float cantitate, pret;

public:
    //constructor de initializare fara parametri
    CleansingGel(){
        brand = "No name";
        cod_produs=0;
        tip_ten="Oarecare";
        cantitate=pret=0;
    }

    //constructor de initializare cu parametri
    CleansingGel(const string& br,int cod,const string& tt, float ct, float p){
        brand = br;
        cod_produs = cod;
        tip_ten=tt;
        cantitate=ct;
        pret=p;
    }


    //constructor de copiere
    CleansingGel(const CleansingGel &g){
        this->brand = g.brand;
        this->cod_produs = g.cod_produs;
        this->tip_ten = g.tip_ten;
        this->cantitate = g.cantitate;
        this->pret = g.pret;
    }

    friend ostream& operator<<(ostream& iesire,const CleansingGel& g){
        iesire<<"Gelul de curatare "<<g.brand<<" pentru tipul de ten "<<g.tip_ten<<" are pretul "<<g.pret<<endl;
        return iesire;
    }

    void pret_redus(float procent_reducere){
        this->pret = this->pret - (procent_reducere/100)*this->pret;
        cout<<"Pretul dupa reducere este "<<this->pret<<endl;
    }

    void pret_majorat(float procent_marire){
        this->pret = this->pret + (procent_marire/100)* this->pret;
        cout<<"Noul pret este: "<<this->pret<<endl;
    }

    float getPret() const{
        return this->pret;
    }

    string getBrand() const{
        return this->brand;
    }

    float getCantitate() const{
        return this->cantitate;
    }
};

class Market{
private:
    vector<SPF> spf_list;
    vector<CleansingGel> cg_list;
    string nume, adresa;

public:


    Market(const vector<SPF> &spfList, const vector<CleansingGel> &cgList, const string &nume, const string &adresa)
            : spf_list(spfList), cg_list(cgList), nume(nume), adresa(adresa) {}

    void add_spf(SPF &spf){
        spf_list.push_back(spf);
    }

    void add_cleansing(CleansingGel &cg){
        cg_list.push_back(cg);
    }

    string getNume() const{
        return this->nume;
    }

    void setNume(const string &nume) {
        this->nume = nume;
    }

    string getAdresa() const{
        return this->adresa;
    }

    void setAdresa(const string &adresa) {
        this->adresa = adresa;
    }

    Market(const string &nume, const string &adresa) {
        this->nume= nume;
        this->adresa = adresa;
    }

    void stoc_spf(){
        cout<<"Pe stoc se afla "<<this->spf_list.size()<<" lotiuni cu spf"<<endl;
    }

    void stoc_cleansing(){
        cout<<"Pe stoc se afla "<<this->cg_list.size()<<" geluri de curatare"<<endl;
    }

    void sum_total_spf(){
        float suma=0;
        for(unsigned i=0; i<this->spf_list.size();i++)
            suma+= this->spf_list.at(i).getPret();
        cout<<"Pretul total pt stocul de spf este "<<suma<<endl;
    }

    void sum_total_cg(){
        float suma=0;
        for(unsigned i=0; i<this->cg_list.size();i++)
            suma+= this->cg_list.at(i).getPret();
        cout<<"Pretul total pt stocul de spf este "<<suma<<endl;
    }

    friend ostream& operator<<(ostream& iesire,const Market& m){
        iesire<<"Magazinul "<<m.nume<<" se afla la adresa "<<m.adresa<<endl;
        return iesire;
    }

};


class Comanda{
    int id_comanda;
    vector<SPF>spf_comandat;
    vector<CleansingGel>cg_comandat;
    float pret;
    string data_comanda;

public:
    Comanda(int idComanda, const vector<SPF> &spfComandat, const vector<CleansingGel> &cgComandat,
            const string &dataComanda) : id_comanda(idComanda), spf_comandat(spfComandat),
            cg_comandat(cgComandat),data_comanda(dataComanda) {}

    void total_comanda(){
        float total=0;
        for(unsigned i=0; i<this->spf_comandat.size();i++)
            total += this->spf_comandat.at(i).getPret();
        for(unsigned i=0; i<this->cg_comandat.size();i++)
            total += this->cg_comandat.at(i).getPret();
        cout<<"total: "<<total<<endl;
    }

    int getID_comanda()const{
        return this->id_comanda;
    }

    float getPret()const{
        return this->pret;
    }

    string getData()const{
        return this->data_comanda;
    }

    vector<SPF> getSPF_comandat()const{
        return this->spf_comandat;
    }


};

class Client{
    string nume;
    int id_client;
    string adresa;
    vector<Comanda> istoric_comenzi;

public:
    Client(const string &nume, int idClient, const string &adresa, const vector<Comanda> &istoricComenzi) :
    nume(nume),id_client(idClient),adresa(adresa),istoric_comenzi(istoricComenzi) {}

    friend ostream& operator<<(ostream& out,Client &c){
        out<<"Clientul "<<c.nume<<" cu id-ul "<<c.id_client<<" cu adresa "<<c.adresa<<" are urmatorul istoric de comenzi:"<<endl;
        for(unsigned i=0;i<c.istoric_comenzi.size();i++) {
            vector<SPF> aux_spf;
            aux_spf = c.istoric_comenzi.at(i).getSPF_comandat();
            vector<CleansingGel> aux_cg;
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

            out<<endl;
        }
    return out;
    }

};


int main()
{
    SPF s1;
    cout<<s1;
    SPF s2("Altruist",001,"mixt",50,200,35.4,60); //constructor init cu parametri
    SPF s3(s2); //constructor de copiere
    cout<<s2; //operatorul <<
    s2.pret_nou(50); //pretul dupa marire
    s2.actualizare_stoc(2); // stoc actulizat
    SPF s4;
    s4 = s2;

    CleansingGel g1;
    cout<<g1;
    CleansingGel g2("Cerave",234, "uscat", 100, 30);
    cout<<g2;
    CleansingGel g3(g2);
    cout<<g2;
    CleansingGel g4("Bioderma",456, "mixt", 150, 50);
    g2.pret_redus(25);
    cout<<g2;
    g4.pret_majorat(50);
    cout<<g4;

    Market m("The ordinary", "Brasov");
    m.add_spf(s2);
    m.add_cleansing(g2);
    cout<<m;
    m.sum_total_cg();
    m.sum_total_spf();
    m.stoc_cleansing();
    m.stoc_spf();
    Market m2{{s2,s3},{g2,g3},
             "Geek and Gorgeous","Bucuresti"};

    Comanda com{105522,{s2},{g2,g4},"10-Oct-2020" };
    com.total_comanda();
    Client c1{"Popescu",111,"Sibiu",{com}};
    cout<<c1;




    return 0;
}

