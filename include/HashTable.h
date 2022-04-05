//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_HASHTABLE_H
#define P04DIEGODIAZMORON_HASHTABLE_H

#include "DispersionFunction.h"
#include "ExplorationFunction.h"
#include "Sequence.h"
#include "List.h"
#include "Block.h"

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
    fe = explorationFunction;
    fd = dispersionFunction;
    if(fe == nullptr) table = new List<Key> [tableSize];
    else{
        table = new Block<Key> [tableSize];
        for(int i = 0; i < tableSize; i++){
            table[i] = Block<Key>(blockSize);
        }
    }
}

template<class Key>
void HashTable<Key>::insert(Key key) {
    unsigned index = (*fd)(key);
    if (!table[index].insert(key)) {
        int attempt = 0;
        while (attempt < blockSize && !table[index].insert(key)) {
            index = (*fe)(key, index);
            table[index].insert(key);
            attempt++;
        }
    }
}


template<class Key>
bool HashTable<Key>::search(Key key) {
    bool output = false;
    unsigned index = (*fd)(key);
    if(table[index].search(key)) output = true;
    else {
        int attempt = 0;
        while (attempt < blockSize && !table[index].search(key)) {
            index = (*fe)(key, index);
            if(table[index].search(key)) output = true;
            attempt++;
        }
    }
    return output;

}

#endif //P04DIEGODIAZMORON_HASHTABLE_H

