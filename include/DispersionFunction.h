//
// Created by diedi on 30/03/2022.
//

#ifndef P04DIEGODIAZMORON_DISPERSIONFUNCTION_H
#define P04DIEGODIAZMORON_DISPERSIONFUNCTION_H


template<class Key>
class DispersionFunction {
public:
    virtual unsigned operator()(const Key& k) const = 0;
};

#endif //P04DIEGODIAZMORON_DISPERSIONFUNCTION_H
