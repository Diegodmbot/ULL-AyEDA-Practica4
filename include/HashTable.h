//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_HASHTABLE_H
#define P04DIEGODIAZMORON_HASHTABLE_H

#include "DispersionFunction.h"
#include "ExplorationFunction.h"
#include "Sequence.h"

template<class Key>
class HashTable {
public:
    HashTable(int size, DispersionFunction<Key> *dispersionFunction, ExplorationFunction<Key> *explorationFunction = nullptr, int blockSize = 0);
    ~HashTable() = default;
    void insert(Key key);
    bool search(Key key);
private:
    int tableSize;
    int blockSize;
    Sequence<Key> *table;
    DispersionFunction<Key> *fd;
    ExplorationFunction<Key> *fe;
};

template<class Key>
HashTable<Key>::HashTable(int tableSz, DispersionFunction<Key> *dispersionFunction, ExplorationFunction<Key> *explorationFunction, int blockSz) {
    tableSize = tableSz;
    blockSize = blockSz;
    table = new Sequence<Key>[tableSize];
    for (int i = 0; i < tableSize; i++) {
        table[i] = nullptr;
    }
    fd = dispersionFunction;
    fe = explorationFunction;
}

template<class Key>
void HashTable<Key>::insert(Key key) {
    unsigned index = fd(key, tableSize);
    if (table[index] == nullptr) {
        table->insert(key, index);
    } else {
        int attempt = 0;
        while (attempt <= blockSize) {
            index = fe(key, index);
            if (table[index] == nullptr) {
                table->insert(key, index);
                break;
            }
            attempt++;
        }
    }
}


template<class Key>
bool HashTable<Key>::search(Key key) {
    bool output = true;
    unsigned index = fd(key, tableSize);
    if (table[index] == nullptr)
        return false;
    return output;

}


#endif //P04DIEGODIAZMORON_HASHTABLE_H

