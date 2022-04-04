//
// Created by diedi on 30/03/2022.
//

#ifndef P04DIEGODIAZMORON_FDSUM_H
#define P04DIEGODIAZMORON_FDSUM_H

#include "DispersionFunction.h"

template<class Key>
class fdSum : public DispersionFunction<Key> {
public:
    explicit fdSum(const unsigned n) : tableSize(n) {}
    unsigned operator()(const Key &k) const;
private:
    unsigned tableSize;
};

template<class Key>
unsigned fdSum<Key>::operator()(const Key &k) const {
    int d = 0;
    while (k > 0) {
        d += k % 10;
        k /= 10;
    }
    return (d % tableSize);
}

#endif //P04DIEGODIAZMORON_FDSUM_H
