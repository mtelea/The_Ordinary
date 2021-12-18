//
// Created by Maria on 12/18/2021.
//

#include "Produs_Builder.h"
#include "SPF.h"
#include "Produs.h"


Produs_Builder& Produs_Builder::brand(std::string b){
s.brand = b;
return *this;
}

Produs_Builder& Produs_Builder:: tip_ten(std::string t){
    s.tip_ten = t;
    return *this;
}

Produs_Builder& Produs_Builder:: cantitate(float c){
    s.cantitate = c;
    return *this;
}

Produs_Builder& Produs_Builder:: pret(float p){
    s.pret = p;
    return *this;
}

Produs_Builder& Produs_Builder:: stoc(int a){
    s.stoc = a;
    return *this;
}

Produs_Builder& Produs_Builder:: factor(int f){
    s.factor_protectie = f;
    return *this;
}

SPF Produs_Builder::build() {
    return s;
}
