#ifndef THE_ORDINARY_EXCEPTII_H
#define THE_ORDINARY_EXCEPTII_H

#include <stdexcept>

using namespace std::string_literals;

class EroareProdus : public std::runtime_error {
public:
    explicit EroareProdus(const std::string &arg);
};

class EroarePret : public EroareProdus {
public:
    explicit EroarePret(double p);
};

class EroareCantitate : public EroareProdus {
public:
    explicit EroareCantitate(float cantitate);
};

#endif //THE_ORDINARY_EXCEPTII_H
