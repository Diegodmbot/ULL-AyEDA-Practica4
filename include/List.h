//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_LIST_H
#define P04DIEGODIAZMORON_LIST_H

#include <list>

#include "Sequence.h"

template<class Key>
class List : public Sequence<Key> {
public:
    List() = default;
    ~List() = default;
    bool insert(const Key &x);
    bool search(const Key &x);
    bool isFull() const;
private:
    std::list<Key> list_;
};

template<class Key>
bool List<Key>::insert(const Key &x){
    bool output = false;
    if (!search(x)) {
        output = true;
        list_.push_back(x);
    }
    return output;
}

template<class Key>
bool List<Key>::search(const Key &x) {
    bool output = false;
    for (auto &i: list_) {
        if (i == x) {
            output = true;
            break;
        }
    }
    return output;
}

template<class Key>
bool List<Key>::isFull() const {
    return false;
}



#endif //P04DIEGODIAZMORON_LIST_H
