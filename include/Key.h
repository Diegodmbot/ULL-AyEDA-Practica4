//
// Created by diedi on 05/04/2022.
//

#ifndef P04DIEGODIAZMORON_KEY_H
#define P04DIEGODIAZMORON_KEY_H

class Key {
public:
    Key();
    Key(long key);
    int getKey();
    int getKey() const;
    void setKey(const long key);
    bool operator==(const Key &key);
    bool operator!=(const Key &key);
    bool operator<(const Key &key);
    bool operator>(const Key &key);
    bool operator<=(const Key &key);
    bool operator>=(const Key &key);
private:
    long key;
};

Key::Key() {
    key = 0;
}

Key::Key(long key) {
    this->key = key;
}

int Key::getKey() {
    return key;
}

int Key::getKey() const {
    return key;
}

void Key::setKey(const long key) {
    this->key = key;
}

bool Key::operator==(const Key &key) {
    return this->key == key.getKey();
}

bool Key::operator!=(const Key &key) {
    return this->key != key.getKey();
}

bool Key::operator<(const Key &key) {
    return this->key < key.getKey();
}

bool Key::operator>(const Key &key) {
    return this->key > key.getKey();
}

bool Key::operator<=(const Key &key) {
    return this->key <= key.getKey();
}

bool Key::operator>=(const Key &key) {
    return this->key >= key.getKey();
}


#endif //P04DIEGODIAZMORON_KEY_H
