//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_FEDISPERSION_H
#define P04DIEGODIAZMORON_FEDISPERSION_H



#include "ExplorationFunction.h"

template<class Key>
class feDispersion : public ExplorationFunction<Key> {
public:
    unsigned operator()(const Key& k, unsigned i) const {
        return ;
    }
};

#endif //P04DIEGODIAZMORON_FEDISPERSION_H

//TODO: implementar la funcion de exploracion de dispersion punto 2