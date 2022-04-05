//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_FEREDISPERSION_H
#define P04DIEGODIAZMORON_FEREDISPERSION_H

#include "ExplorationFunction.h"

template<class Key>
class feRedispersion : public ExplorationFunction<Key> {
public:
    unsigned operator()(const Key& k, unsigned i) const;
};

template<class Key>
unsigned feRedispersion<Key>::operator()(const Key& k, unsigned i) const {
    srand(k);
    for(unsigned j = 1; j < i; j++) rand();
    return rand();
}

#endif //P04DIEGODIAZMORON_FEREDISPERSION_H
