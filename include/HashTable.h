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
    ~HashTable() = default;
    void insert(Key key);
    bool search(Key key);
private:
    int tableSize;
    // array of pointers to keys
    Key **table;
    DispersionFunction<Key> *fd;
    ExplorationFunction<Key> *fe;
};

template<class Key>
HashTable<Key>::HashTable(int size, DispersionFunction<Key> *dispersionFunction, ExplorationFunction<Key> *explorationFunction, int blockSize) {
    tableSize = size;
    table = new Key*[tableSize];
    for (int i = 0; i < tableSize; i++) {
        table[i] = nullptr;
    }
    fd = dispersionFunction;
    fe = explorationFunction;
}


#endif //P04DIEGODIAZMORON_HASHTABLE_H

//TODO: implementar la tabla hash
