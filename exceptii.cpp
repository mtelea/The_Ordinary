#include "exceptii.h"
#include<string>

using namespace std::string_literals;

EroareProdus::EroareProdus(const std::string &arg) : std::runtime_error("Eroare Produs!") {}

EroarePret::EroarePret(double p) : EroareProdus("Atentie! Pretul introdus nu poate fi de 0 lei!") {}

EroareCantitate::EroareCantitate(float cantitate) : EroareProdus("Atentie! Cantitatea unui produs nu poate fi de 0 ml !") {}
