#include <iostream>
#include "Hash.h"

const int TABLE_SIZE = 10;

int main() {
	char str[] = "Hello World!";
	
	Hash hash;
	int index = hash.index(TABLE_SIZE, str, sizeof(str));

	std::cout << index;

	return 0;
}