#ifndef HASH_H
#define HASH_H

class Hash {
public: 
	int getHash(int tableSize, char *str, int size);
private:
	int sumChars(char *str, int size);
};

#endif