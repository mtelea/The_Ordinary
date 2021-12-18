//
// Created by Maria on 12/18/2021.
//

#include "Produs_Factory.h"

CleansingGel Produs_Factory:: gel_spuma() { return CleansingGel("Clinique","mixt",100,80,100,2);}
CleansingGel Produs_Factory:: gel_hidratant(){return CleansingGel("Cerave","uscat",100,60,100,3);}
CleansingGel Produs_Factory:: gel_activ() { return CleansingGel("Bioderma","gras",150,75.5,100,2);}
SPF Produs_Factory:: crema_copii() {return SPF("Nivea","sensibil",50,55,100,70);}
SPF Produs_Factory :: crema_tratament() {return SPF("Tom Ford","matur",40,260.9,50,100);}