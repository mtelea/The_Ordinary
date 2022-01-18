//
// Created by Maria on 1/18/2022.
//

#ifndef MAIN_CPP_FUNCTIETEMPLATE_H
#define MAIN_CPP_FUNCTIETEMPLATE_H

template<class T>
void isPositive(T val){
    if(val<0)
    {
        throw std::runtime_error("Valoarea nu poate fi negativa!");
    }
}

#endif //MAIN_CPP_FUNCTIETEMPLATE_H
