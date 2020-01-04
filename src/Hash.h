#ifndef HASH_H
#define HASH_H

class Hash {
public: 
	int index(int tableSize, char *str, int size);
private:
	int getHash(char *str, int size);
};

#endif