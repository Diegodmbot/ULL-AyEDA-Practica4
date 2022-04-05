//
// Created by diedi on 05/04/2022.
//

#ifndef P04DIEGODIAZMORON_KEY_H
#define P04DIEGODIAZMORON_KEY_H

class Key {
public:
    Key();
    Key(long key1, long key2);
    long getEntireKey();
    long getEntireKey() const;
    void setKey(const long key1, const long key2);
    bool operator==(const Key &key);
    bool operator!=(const Key &key);
    bool operator<(const Key &key);
    bool operator>(const Key &key);
    bool operator<=(const Key &key);
    bool operator>=(const Key &key);
    // overload aritmetic operators
    Key operator+(const Key &key);
    Key operator-(const Key &key);
    Key operator*(const Key &key);
    Key operator/(const Key &key);
    Key operator%(const Key &key);
    //overload >> and << operators
    friend std::ostream &operator<<(std::ostream &os, const Key &key);
    friend std::istream &operator>>(std::istream &is, Key &key);
private:
    struct {
        long key1;
        long key2;
    } clave;
    long entireKey;
};

Key::Key(long key1, long key2) {
    this->clave.key1 = key1;
    this->clave.key2 = key2;
    entireKey = key1 + key2;
}

Key::Key() {
    Key(0, 0);
}

long Key::getEntireKey() {
    return entireKey;
}

long Key::getEntireKey() const {
    return entireKey;
}

void Key::setKey(const long key1, const long key2) {
    this->clave.key1 = key1;
    this->clave.key2 = key2;
    entireKey = key1 + key2;
}

bool Key::operator==(const Key &key) {
    return this->entireKey == key.getEntireKey();
}

bool Key::operator!=(const Key &key) {
    return this->entireKey != key.getEntireKey();
}

bool Key::operator<(const Key &key) {
    return this->entireKey < key.getEntireKey();
}

bool Key::operator>(const Key &key) {
    return this->entireKey > key.getEntireKey();
}

bool Key::operator<=(const Key &key) {
    return this->entireKey <= key.getEntireKey();
}

bool Key::operator>=(const Key &key) {
    return this->entireKey >= key.getEntireKey();
}

std::ostream &operator<<(std::ostream &os, const Key &key) {
    os << key.getEntireKey();
    return os;
}

std::istream &operator>>(std::istream &is, Key &key) {
    long key1, key2;
    is >> key1 >> key2;
    key.setKey(key1, key2);
    return is;
}

Key Key::operator+(const Key &key) {
    return Key(this->clave.key1 + key.clave.key1, this->clave.key2 + key.clave.key2);
}

Key Key::operator-(const Key &key) {
    return Key(this->clave.key1 - key.clave.key1, this->clave.key2 - key.clave.key2);
}

Key Key::operator*(const Key &key) {
    return Key(this->clave.key1 * key.clave.key1, this->clave.key2 * key.clave.key2);
}

Key Key::operator/(const Key &key) {
    return Key(this->clave.key1 / key.clave.key1, this->clave.key2 / key.clave.key2);
}

Key Key::operator%(const Key &key) {
    return Key(this->clave.key1 % key.clave.key1, this->clave.key2 % key.clave.key2);
}


#endif //P04DIEGODIAZMORON_KEY_H
