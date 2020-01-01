#include <iostream>
#include "Hash.h"

const int TABLE_SIZE = 10;

int main() {
	char str[] = "Hello World!";
	
	Hash hash;
	hash.getHash(TABLE_SIZE, str, sizeof(str));

	return 0;
}