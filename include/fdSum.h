//
// Created by diedi on 30/03/2022.
//

#ifndef P04DIEGODIAZMORON_FDSUM_H
#define P04DIEGODIAZMORON_FDSUM_H

#include "DispersionFunction.h"

template<class Key>
class fdSum : public DispersionFunction<Key> {
    explicit fdSum(const unsigned n) : tableSize(n) {}

    unsigned operator()(const Key &k) const {
        int d = 0;
        while(k > 0) {
            d += k % 10;
            k /= 10;
        }
        return (d % tableSize);
    }

private:
    unsigned tableSize;
};
#endif //P04DIEGODIAZMORON_FDSUM_H
