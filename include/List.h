//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_LIST_H
#define P04DIEGODIAZMORON_LIST_H

#include <list>

#include "Sequence.h"

template<class Key>
class List : Sequence<Key> {
public:
    List();
    ~List();
    bool insert(Key &x);
    bool search(Key &x);
    bool isFUll();

private:
    int size;
    std::list<Key> list_;
};

#endif //P04DIEGODIAZMORON_LIST_H

//TODO: implementar punto 4
