//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_BLOCK_H
#define P04DIEGODIAZMORON_BLOCK_H

#include "Sequence.h"
#include <vector>

template<class Key>
class Block : public Sequence<Key> {
public:
    Block(int sz);
    ~Block();
    bool insert(Key &x);
    bool search(Key &x);
    bool isFUll();
private:
    int blockSize;
    std::vector<Key> block_;
};

template<class Key>
Block<Key>::Block(int sz) : blockSize(sz) {
    block_.resize(sz);
}

template<class Key>
Block<Key>::~Block() {
    delete[] block_;
}

template<class Key>
bool Block<Key>::insert(Key &x) {
    bool output = true;
    if (isFUll())
        output = false;
    else
        block_.push_back(x);
    return output;
}

template<class Key>
bool Block<Key>::search(Key &x) {
    bool output = false;
    for (auto &i: block_) {
        if (i == x) {
            output = true;
            break;
        }
    }
    return output;
}

template<class Key>
bool Block<Key>::isFUll() {
    bool output = false;
    if (block_.size() == blockSize) {
        output = true;
    }
    return output;
}


#endif //P04DIEGODIAZMORON_BLOCK_H

// TODO: implmentar clase block putno 5
