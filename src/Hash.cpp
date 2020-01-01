#include <iostream>
#include "Hash.h"

int Hash::getHash() {
	char str[] = "Hello World!";
	int testNum = 11;

	int val = 0;
	for (int i=0; i < sizeof(str); i++) {
		val += str[i];
	}

	std::cout << val;

	return 0;
}

// //Sums ASCII values of all characters in string
// int Hash::sumChars() {

// }