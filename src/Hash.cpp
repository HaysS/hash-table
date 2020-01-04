#include <iostream>
#include "Hash.h"


//Sums ASCII values of all characters in string to generate hash
int Hash::getHash(char *str, int size) {
	int val = 0;

	for (int i = 0; i < size; i++) {
		val += str[i];
	}

	return val;	
}


int Hash::index(int tableSize, char *str, int size) {
	int hash = getHash(str, size);

	return hash % tableSize;
}

