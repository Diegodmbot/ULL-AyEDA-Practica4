//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_EXPLORATIONFUNCTION_H
#define P04DIEGODIAZMORON_EXPLORATIONFUNCTION_H

template<class Key>
class ExplorationFunction {
public:
    virtual unsigned operator()(const Key& k, unsigned i) const = 0;
};

#endif //P04DIEGODIAZMORON_EXPLORATIONFUNCTION_H
