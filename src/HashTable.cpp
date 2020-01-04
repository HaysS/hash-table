#include <iostream>
#include "HashTable.h"


//Sums ASCII values of all characters in string to generate hash
int HashTable::getHash(char *str, int size) {
	int val = 0;

	for (int i = 0; i < size; i++) {
		val += str[i];
	}

	return val;	
}


int HashTable::index(int tableSize, char *str, int size) {
	int hash = getHash(str, size);

	return hash % tableSize;
}

