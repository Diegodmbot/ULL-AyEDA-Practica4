//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_SEQUENCE_H
#define P04DIEGODIAZMORON_SEQUENCE_H

template<class Key>
class Sequence {
public:
    virtual bool insert(const Key &x) = 0;
    virtual bool search(const Key &x) = 0;
    virtual bool isFull() const = 0;
};

#endif //P04DIEGODIAZMORON_SEQUENCE_H
