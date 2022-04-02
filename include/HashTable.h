//
// Created by diedi on 02/04/2022.
//

#ifndef P04DIEGODIAZMORON_HASHTABLE_H
#define P04DIEGODIAZMORON_HASHTABLE_H
template<class Key>
class HashTable {
public:
    HashTable(int size);
    ~HashTable();
    void insert(Key key);
    bool search(Key key);
private:
    int tableSize;
    Key *table;
};
#endif //P04DIEGODIAZMORON_HASHTABLE_H

//TODO: implementar la tabla hash punto 6
