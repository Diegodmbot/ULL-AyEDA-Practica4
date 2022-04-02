//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_FEREDISPERSION_H
#define P04DIEGODIAZMORON_FEREDISPERSION_H

#include "ExplorationFunction.h"

template<class Key>
class feRedispersion : public ExplorationFunction<Key> {
public:
    unsigned operator()(const Key& k, unsigned i) const {
        return ;
    }
};

//TODO: implementar la funcion de exploracion de redispersion punto 2
#endif //P04DIEGODIAZMORON_FEREDISPERSION_H
