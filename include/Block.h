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
    bool insert(const Key &x);
    bool search(const Key &x);
    bool isFull() const;
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
bool Block<Key>::insert(const Key &x) {
    bool output = true;
    if (isFull())
        output = false;
    else
        block_.push_back(x);
    return output;
}

template<class Key>
bool Block<Key>::search(const Key &x) {
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
bool Block<Key>::isFull() const {
    bool output = false;
    if (block_.size() == blockSize) {
        output = true;
    }
    return output;
}


#endif //P04DIEGODIAZMORON_BLOCK_H
