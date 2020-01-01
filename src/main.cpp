#include <iostream>
#include "Hash.h"

const int TABLE_SIZE = 10;

int main() {
	char str[] = "Hello World!";
	
	Hash hash;
	int hashVal = hash.getHash(TABLE_SIZE, str, sizeof(str));

	std::cout << hashVal;

	return 0;
}