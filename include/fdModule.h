//
// Created by diedi on 30/03/2022.
//

#ifndef P04DIEGODIAZMORON_FDMODULE_H
#define P04DIEGODIAZMORON_FDMODULE_H

#include "DispersionFunction.h"

template<class Key>
class fdModule: public DispersionFunction<Key> {
public:
    explicit fdModule(const unsigned n): tableSize(n){}
    unsigned operator()(const Key& k) const;
private:
    unsigned tableSize;
};

template<class Key>
unsigned fdModule<Key>::operator()(const Key& k) const {
    return k.getEntireKey() % tableSize;
}

#endif //P04DIEGODIAZMORON_FDMODULE_H
