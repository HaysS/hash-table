#include <iostream>
#include "HashTable.h"

const int TABLE_SIZE = 10;

int main() {
	char str[] = "Hello World!";
	
	HashTable hashTable;
	int index = hashTable.index(TABLE_SIZE, str, sizeof(str));

	std::cout << index;

	return 0;
}