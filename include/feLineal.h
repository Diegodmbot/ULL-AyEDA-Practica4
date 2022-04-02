//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_FELINEAL_H
#define P04DIEGODIAZMORON_FELINEAL_H

#include "ExplorationFunction.h"

template<class Key>
class feLineal: public ExplorationFunction<Key> {
public:
    unsigned operator()(const Key& k, unsigned i) const {
        return i;
    }
};

#endif //P04DIEGODIAZMORON_FELINEAL_H
