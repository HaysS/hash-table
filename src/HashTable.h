#ifndef HASHTABLE_H
#define HASHTABLE_H

class HashTable {
public: 
	int index(int tableSize, char *str, int size);
private:
	int getHash(char *str, int size);
};

#endif