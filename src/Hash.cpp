#include <iostream>
#include "Hash.h"


//Sums ASCII values of all characters in string to generate hash
int Hash::sumChars(char *str, int strLength) {
	int val = 0;

	for (int i = 0; i < strLength; i++) {
		val += str[i];
	}

	return val;	
}


int Hash::getHash(int tableSize, char *str, int strLength) {
	int asciiSum = sumChars(str, strLength);

	return asciiSum % tableSize;
}

