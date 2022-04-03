//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_HASHTABLE_H
#define P04DIEGODIAZMORON_HASHTABLE_H

#include "DispersionFunction.h"
#include "ExplorationFunction.h"

template<class Key>
class HashTable {
public:
    HashTable(int size, DispersionFunction<Key> *dispersionFunction, ExplorationFunction<Key> *explorationFunction = nullptr, int blockSize = 0);
    ~HashTable();
    void insert(Key key);
    bool search(Key key);
private:
    int tableSize;
    Key *table;
    DispersionFunction<Key> *fd;
    ExplorationFunction<Key> *fe;


};
#endif //P04DIEGODIAZMORON_HASHTABLE_H

//TODO: implementar la tabla hash punto 6
