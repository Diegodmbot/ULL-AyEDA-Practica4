//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_FEDISPERSION_H
#define P04DIEGODIAZMORON_FEDISPERSION_H


#include "ExplorationFunction.h"
#include "DispersionFunction.h"

template<class Key>
class feDispersion : public ExplorationFunction<Key> {
public:
    feDispersion(DispersionFunction<Key> *function) : fd_(function) {}
    unsigned operator()(const Key &k, unsigned i) const;
private:
    DispersionFunction<Key> *fd_;
};

template<class Key>
unsigned feDispersion<Key>::operator()(const Key &k, unsigned i) const {
    unsigned a1 = (*fd_)(k);
    return i * a1;
}

#endif //P04DIEGODIAZMORON_FEDISPERSION_H
