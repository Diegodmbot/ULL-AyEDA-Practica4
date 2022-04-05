//
// Created by diedi on 30/03/2022.
//

#ifndef P04DIEGODIAZMORON_FDRANDOM_H
#define P04DIEGODIAZMORON_FDRANDOM_H

#include <random>
#include "DispersionFunction.h"

template<class Key>
class fdRandom : public DispersionFunction<Key> {
public:
    unsigned operator()(const Key &k) const;
    explicit fdRandom(const unsigned n) : tableSize(n) {}
private:
    unsigned tableSize;
};

template<class Key>
unsigned fdRandom<Key>::operator()(const Key &k) const {
    srand(k.getEntireKey());
    return rand() % tableSize;
}

#endif //P04DIEGODIAZMORON_FDRANDOM_H
