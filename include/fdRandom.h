//
// Created by diedi on 30/03/2022.
//

#ifndef P04DIEGODIAZMORON_FDRANDOM_H
#define P04DIEGODIAZMORON_FDRANDOM_H

#include <random>
#include "DispersionFunction.h"

template<class Key>
class fdRandom : public DispersionFunction<Key> {
    explicit fdRandom(const unsigned n) : tableSize(n) {}

    unsigned operator()(const Key &k) const {
        srand(k);
        return rand() % tableSize;
    }

private:
    unsigned tableSize;
};


#endif //P04DIEGODIAZMORON_FDRANDOM_H