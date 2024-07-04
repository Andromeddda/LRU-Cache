#include <iostream>
#include "hash_queue.hpp"

int main(void) {
	HashQueue hui = HashQueue(3);

	std::cout << hui.size() << '\n';
	return 0;
}