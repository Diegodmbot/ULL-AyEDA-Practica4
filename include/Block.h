//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_BLOCK_H
#define P04DIEGODIAZMORON_BLOCK_H

#include "Sequence.h"
template<class Key>
class Block : public Sequence<Key> {
public:
    Block();
    ~Block();
    bool insert(Key &x);
    bool search(Key &x);
    bool isFUll();
private:
    int blockSize;
};
#endif //P04DIEGODIAZMORON_BLOCK_H

// TODO: implmentar clase block putno 5
