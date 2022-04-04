//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_FEQUADRATIC_H
#define P04DIEGODIAZMORON_FEQUADRATIC_H

#include "ExplorationFunction.h"

template<class Key>
class feQuadratic : public ExplorationFunction<Key> {
public:
    unsigned operator()(const Key& k, unsigned i) const;
};

template<class Key>
unsigned feQuadratic<Key>::operator()(const Key& k, unsigned i) const {
    return i * i;
}

#endif //P04DIEGODIAZMORON_FEQUADRATIC_H

//"En la implementación de la función de exploración cuadrática sólo se tendrán en cuenta los desplazamientos positivos respecto a la posición inicial."